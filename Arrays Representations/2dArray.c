#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // 1. Static 2D Array: Created entirely in the stack
    int A[3][4] = {
        {1, 2, 3, 4},
        {2, 3, 4, 5},
        {0, 3, 4, 2}
    };

    // 2. Partially Dynamic 2D Array: Array of pointers in the stack, rows in the heap
    int *B[3]; // Array of row pointers created in the stack
    for (int i = 0; i < 3; i++) {
        B[i] = (int *)malloc(4 * sizeof(int)); // Allocate memory for each row in the heap
    }

    // 3. Fully Dynamic 2D Array: Both array of pointers and rows created in the heap
    int **C; // Pointer to a pointer, created in the stack
    C = (int **)malloc(3 * sizeof(int *)); // Allocate memory for 3 row pointers in the heap
    for (int i = 0; i < 3; i++) {
        C[i] = (int *)malloc(4 * sizeof(int)); // Allocate memory for each row in the heap
    }

    // Assigning values to the arrays
    printf("Assigning values to the arrays:\n");

    // Assign values to array B (partially dynamic)
    printf("Assigning values to B (partially dynamic):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            B[i][j] = i + j; // Example: sum of row and column indices
            printf("B[%d][%d] = %d\n", i, j, B[i][j]);
        }
    }

    // Assign values to array C (fully dynamic)
    printf("Assigning values to C (fully dynamic):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            C[i][j] = (i + 1) * (j + 1); // Example: product of (row + 1) and (column + 1)
            printf("C[%d][%d] = %d\n", i, j, C[i][j]);
        }
    }

    // Printing all arrays
    printf("\nPrinting arrays:\n");

    // Print array A
    printf("Static array A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Print array B
    printf("Partially dynamic array B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Print array C
    printf("Fully dynamic array C:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Freeing the dynamically allocated memory
    printf("\nFreeing memory allocated for arrays B and C.\n");
    for (int i = 0; i < 3; i++) {
        free(B[i]); // Free each row of array B
        free(C[i]); // Free each row of array C
    }
    free(C); // Free the array of pointers for array C

    return 0;
}
