#include <stdio.h>
// Structure with function pointer
struct Calculator {
    int (*operation)(int, int);  // function pointer
};
// Function to add two numbers
int add(int a, int b) {
    return a + b;
}
int main() {
    struct Calculator calc;
    // Assign function pointer
    calc.operation = add;
    // Call function using pointer
    int result = calc.operation(5, 3);
    printf("Result: %d\n", result);  // Output: 8
    return 0;
}
