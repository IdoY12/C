#include <stdio.h>

int main() {
    int n = 10;
    char c = 'A';

    // Initialize pointers
    // The '&' symbol is the "Address-of" operator.
    // It retrieves the specific memory address where a variable is stored.
    // When we say 'int *int_ptr = &n;', we are telling the computer: 
    // "Don't give me the value of n (which is 10), give me the 'house number' (address) of n in RAM."
    int *int_ptr = &n;
    char *char_ptr = &c;

    printf("--- Integer Pointer (Steps of 4 bytes) ---\n");
    // Printing the current address and the value inside it
    printf("Current Address: %p | Value: %d\n", (void*)int_ptr, *int_ptr);
    
    // Moving 1 step forward (4 bytes)
    int *next_int = int_ptr + 1;
    printf("Next Address:    %p | Value: %d (Garbage/Unknown)\n\n", (void*)next_int, *next_int);

    printf("--- Character Pointer (Steps of 1 byte) ---\n");
    // Printing the current address and the value inside it
    printf("Current Address: %p | Value: %c\n", (void*)char_ptr, *char_ptr);
    
    // Moving 1 step forward (1 byte)
    char *next_char = char_ptr + 1;
    printf("Next Address:    %p | Value: %d (ASCII of next byte)\n", (void*)next_char, *next_char);

    return 0;
}