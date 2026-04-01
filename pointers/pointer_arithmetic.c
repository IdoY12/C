#include <stdio.h>

int main() {
    // 1. Define an array of 3 integers.
    // Each 'int' typically takes 4 bytes of space in memory (RAM).
    int arr[3] = {10, 20, 30};

    // 2. Assign the address of the array to a pointer.
    // 'p' now holds the memory address of the first element (arr[0]).
    int *p = arr;

    // 3. Printing the first address and value.
    // Let's say this address is 100.
    printf("Address of arr[0]: %p | Value: %d\n", (void*)p, *p);

    // 4. POINTER ARITHMETIC: (p + 1)
    // Even though we write "+ 1", the computer sees that 'p' is an "int pointer".
    // It says: "One step for an int is 4 bytes". 
    // So it calculates: Current_Address + (1 * 4).
    // If the first address was 100, this will be 104.
    printf("Address of arr[1]: %p | Value: %d (Look! It jumped by 4 bytes)\n", (void*)(p + 1), *(p + 1));

    // 5. POINTER ARITHMETIC: (p + 2)
    // Here we tell the computer to move 2 steps forward from the start.
    // Calculation: Current_Address + (2 * 4 bytes) = 8 bytes jump.
    // If the first address was 100, this will be 108.
    printf("Address of arr[2]: %p | Value: %d (Jumped another 4 bytes)\n", (void*)(p + 2), *(p + 2));

    // Note: The values (10, 20, 30) are still there! 
    // To see them, we use *(p + 1) or *(p + 2) to "peek" into that memory house.

    return 0;
}