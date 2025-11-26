// Use malloc() to dynamically allocate an array of N students, input their data, and display the information.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[20];
    int roll;
};

int main() {
    struct Student *s;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    s = malloc(n * sizeof(struct Student));

    for (i = 0; i < n; i++) {
        printf("Enter name and roll: ");
        scanf("%s %d", s[i].name, &s[i].roll);
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s  Roll: %d\n", s[i].name, s[i].roll);
    }

    free(s);
    return 0;
}
