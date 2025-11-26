// Write a function that accepts a structure as a parameter, modifies it, and returns the modified structure.

#include <stdio.h>
struct student {
    char name[50];
    int roll;
    char section;
    int semester;
};
// Function that accepts a structure, modifies it, and returns it
struct student modifyStudent(struct student s) {
    s.semester += 1;  // Example modification: increment semester
    return s;
}
int main() {
    struct student s1;
    // Input student details
    printf("Enter Name: ");
    scanf("%s", s1.name);
    printf("Enter Roll no: ");
    scanf("%d", &s1.roll);
    printf("Enter Section: ");
    scanf(" %c", &s1.section);
    printf("Enter Semester: ");
    scanf("%d", &s1.semester);
    // Modify student using the function
    s1 = modifyStudent(s1);
    // Print modified student details
    printf("\n--- Modified Student Details ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll no: %d\n", s1.roll);
    printf("Section: %c\n", s1.section);
    printf("Semester: %d\n", s1.semester);

    return 0;
}

