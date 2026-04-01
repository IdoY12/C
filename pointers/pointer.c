#include <stdio.h>

int main() {
    // 1. Declare a regular integer variable
    int target = 50;
    
    // 2. Declare a pointer variable that points to an int
    // The '*' here tells the compiler: "ptr will hold a memory address"
    int *ptr;
    
    // 3. Assign the address of 'target' to 'ptr'
    // The '&' operator gets the memory address of the variable
    ptr = &target;
    
    printf("Initial state:\n");
    printf("Value of target: %d\n", target);
    printf("Address of target: %p\n", (void*)&target);
    printf("Value stored in ptr (address): %p\n", (void*)ptr);
    printf("Value ptr is pointing to: %d\n\n", *ptr);
    
    // 4. Change the value using the pointer (dereferencing)
    // The '*' here means: "Go to the address inside ptr and change what's there"
    *ptr = 100;
    
    printf("After changing value via pointer:\n");
    printf("New value of target: %d\n", target);
    printf("New value via ptr: %d\n", *ptr);
    
    return 0;
}