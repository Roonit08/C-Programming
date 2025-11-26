// Use malloc() to dynamically allocate an array of N students, input their data, and display the information.

#include <stdio.h>
#include <stdlib.h>
struct Date {
    int day, month, year;
};
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining_date;
};
int main() {
    int N, i;
    scanf("%d", &N);  // number of students
    struct Employee *students = malloc(N * sizeof(*students));
    for(i = 0; i < N; i++)
        scanf("%s %d %f %d %d %d", 
              students[i].name, &students[i].id, &students[i].salary,
              &students[i].joining_date.day,
              &students[i].joining_date.month,
              &students[i].joining_date.year);
    for(i = 0; i < N; i++)
        printf("%s %d %.2f %02d-%02d-%04d\n",
               students[i].name, students[i].id, students[i].salary,
               students[i].joining_date.day,
               students[i].joining_date.month,
               students[i].joining_date.year);
    free(students);
    return 0;
}
