// Create an array of 5 student structures and input/output their details (name, roll number, section, semester).

#include <stdio.h>
struct student {
    char name[50];
    int roll;
    char section;
    int semester;
} s[5];
int main() {
    int i;
    printf("Enter details of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("\nName:\n");
        scanf("%s", s[i].name);
        printf("Roll no:\n");
        scanf("%d", &s[i].roll);
        printf("Section:\n");
        scanf(" %c", &s[i].section);  
        printf("Semester:\n");
        scanf("%d", &s[i].semester);
    }
    printf("\n--- Student Details ---\n");
    for(i = 0; i < 5; i++) {
        printf("\nName: %s\n", s[i].name);
        printf("Roll no: %d\n", s[i].roll);
        printf("Section: %c\n", s[i].section);
        printf("Semester: %d\n", s[i].semester);
    }
    return 0;
}
