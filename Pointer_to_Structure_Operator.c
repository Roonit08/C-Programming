#include <stdio.h>

struct student {
    char name[50];
    int roll;
    char section;
    int semester;
};

int main() {

    struct student s = {"Ronit", 12, 'A', 3};  // normal structure variable

    struct student *ptr;   // pointer to structure

    ptr = &s;              // pointer stores address of structure

    // Access members using -> operator
    printf("Name: %s\n", ptr->name);
    printf("Roll no: %d\n", ptr->roll);
    printf("Section: %c\n", ptr->section);
    printf("Semester: %d\n", ptr->semester);

    return 0;
}
