#include <stdio.h>

int main() {
    // 1. Create an array of 3 integers.
    // In memory, these 3 numbers (10, 20, 30) are sitting right next to each other.
    int numbers[] = {10, 20, 30};

    // 2. Point to the first element.
    // Note: The name of the array 'numbers' is actually a pointer to its first element.
    // So 'int *ptr = numbers;' is the same as 'int *ptr = &numbers[0];'
    int *ptr = numbers; 

    printf("--- Walking through the array using a pointer ---\n\n");

    // First House
    printf("Position 1 (Address: %p)\n", (void*)ptr);
    printf("Value: %d\n\n", *ptr); // Dereference to see 10
    
    // 3. Move the pointer to the NEXT integer (4 bytes forward)
    ptr = ptr + 1; 
    printf("Position 2 (Address: %p)\n", (void*)ptr);
    printf("Value: %d\n\n", *ptr); // Dereference to see 20
    
    // 4. Move the pointer to the NEXT integer again
    ptr = ptr + 1; 
    printf("Position 3 (Address: %p)\n", (void*)ptr);
    printf("Value: %d\n", *ptr); // Dereference to see 30

    return 0;
}