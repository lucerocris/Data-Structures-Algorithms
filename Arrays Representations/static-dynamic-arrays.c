#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Static array: created in the stack, has a fixed size
    int a[5]; 

    // Dynamic array: created in the heap, can be resized
    int *p;

    // Allocating memory for 3 integers in the heap
    p = (int *)malloc(3 * sizeof(int)); 

  
    // Input values for the dynamic array
    printf("Enter 3 integers:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &p[i]);
    }

    // Output the values of the dynamic array
    printf("You entered:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    // Note: Static arrays (stack) have a fixed size that cannot be changed.
    // Dynamic arrays (heap) can be resized using functions like realloc.

    // Free the allocated memory to avoid memory leaks
    free(p);

    return 0;
}
