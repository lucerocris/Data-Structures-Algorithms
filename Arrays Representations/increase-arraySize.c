#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p, *q;

    // Allocate memory for 5 integers in the heap for pointer p
    p = (int *)malloc(5 * sizeof(int));

    // Allocate memory for 10 integers in the heap for pointer q
    q = (int *)malloc(10 * sizeof(int));

    // Initialize the first 5 elements of the array pointed to by p
    for (int i = 0; i < 5; i++) {
        p[i] = i; // Assign values 0, 1, 2, 3, 4 to p[0] through p[4]
    }

    // Copy the first 5 elements of p into the array pointed to by q
    for (int i = 0; i < 10; i++) {
        q[i] = (i < 5) ? p[i] : 0; // Set remaining q elements to 0
    }

    // Free the memory previously allocated to p
    free(p);

    // Assign q's address to p (p now points to the larger array)
    p = q;

    // Set q to NULL to indicate it no longer points to valid memory
    q = NULL;

    // Print all 10 elements of the array now pointed to by p
    for (int i = 0; i < 10; i++) {
        printf("%d ", p[i]);
    }

    return 0;
}
