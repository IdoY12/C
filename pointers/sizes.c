#include <stdio.h>

int main() {
    // Standard variables stored in RAM
    int n = 10;
    char c = 'A';

    // POINTER INITIALIZATION
    // The '&' symbol is the "Address-of" operator.
    // It retrieves the specific memory address where a variable is stored.
    // 'int *int_ptr = &n;' tells the computer: 
    // "Don't give me the value of n (10), give me its 'house number' (address) in RAM."
    int *int_ptr = &n;
    char *char_ptr = &c;

    printf("--- Integer Pointer (Steps of 4 bytes) ---\n");
    // Printing the current address and the value it points to.
    // We use (void*) to cast the pointer for the %p formatter (safety first!).
    printf("Current Address: %p | Value: %d\n", (void*)int_ptr, *int_ptr);
    
    // POINTER ARITHMETIC: Moving 1 step forward.
    // Since int_ptr is 'int*', the computer jumps 4 bytes (size of 1 int).
    int *next_int = int_ptr + 1;
    
    // The value here is 'Garbage' because we haven't assigned anything to this specific house.
    // We are looking at a random spot in memory that we don't 'own' yet.
    printf("Next Address:    %p | Value: %d (Garbage/Unknown)\n\n", (void*)next_int, *next_int);

    printf("--- Character Pointer (Steps of 1 byte) ---\n");
    // Character pointers point to 1-byte values.
    printf("Current Address: %p | Value: %c\n", (void*)char_ptr, *char_ptr);
    
    // Moving 1 step forward for a char pointer jumps exactly 1 byte.
    char *next_char = char_ptr + 1;
    
    // Printing the numerical value (ASCII) of whatever is in the next byte.
    printf("Next Address:    %p | Value: %d (ASCII of next byte)\n", (void*)next_char, *next_char);

    return 0;
}