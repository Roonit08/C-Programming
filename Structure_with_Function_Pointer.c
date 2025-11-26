// Create a structure with a function pointer and call a function using the pointer.

#include <stdio.h>
void hello() {
    printf("Hello from function pointer!\n");
}
struct Test {
    void (*fp)();   // function pointer
};
int main() {
    struct Test t;
    t.fp = hello;   // assign function to pointer
    t.fp();         // call function using pointer
    return 0;
}
