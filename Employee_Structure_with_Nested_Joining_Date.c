// Create an employee structure that contains another structure as a member for the joining date.

#include <stdio.h>
// Structure for joining date
struct Date {
    int day, month, year;
};
// Structure for employee with e1 declared
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining_date;  // nested structure
} e1;  // global variable
int main() {
    // Input data
    scanf("%s %d %f %d %d %d", 
          e1.name, &e1.id, &e1.salary, 
          &e1.joining_date.day, &e1.joining_date.month, &e1.joining_date.year);
    // Output data
    printf("%s %d %.2f %02d-%02d-%04d\n", 
           e1.name, e1.id, e1.salary, 
           e1.joining_date.day, e1.joining_date.month, e1.joining_date.year);
    return 0;
}
