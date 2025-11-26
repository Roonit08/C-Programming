// Create a structure with a function pointer and call a function using the pointer.

#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[50];
    int roll;
    char section;
    int semester;
};
int main() {
    struct student *ptr = malloc(sizeof(*ptr));  // allocate memory
    // Input data
    printf("Enter Name: ");
    scanf("%s", ptr->name);
    printf("Enter Roll no: ");
    scanf("%d", &ptr->roll);
    printf("Enter Section: ");
    scanf(" %c", &ptr->section);
    printf("Enter Semester: ");
    scanf("%d", &ptr->semester);
    printf("\n--- Student Details ---\n");
    printf("Name: %s\nRoll no: %d\nSection: %c\nSemester: %d\n",
           ptr->name, ptr->roll, ptr->section, ptr->semester);
    free(ptr);  
    return 0;
}
