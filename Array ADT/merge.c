#include <stdio.h>
#include <stdlib.h>

struct Array {
    int *A;
    int size;
};


struct Array *merge(struct Array *arr1, struct Array *arr2) {
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    arr3->size = arr1->size + arr2->size;
    arr3->A = (int *)malloc(arr3->size * sizeof(int)); 

   
    while (i < arr1->size && j < arr2->size) {
        if (arr1->A[i] < arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
        } else {
            arr3->A[k++] = arr2->A[j++];
        }
    }

    
    while (i < arr1->size) {
        arr3->A[k++] = arr1->A[i++];
    }

    
    while (j < arr2->size) {
        arr3->A[k++] = arr2->A[j++];
    }

    return arr3;
}


void display(struct Array arr) {
    printf("\nElements are: ");
    for (int i = 0; i < arr.size; i++) {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

int main(void) {
    struct Array arr1, arr2, *arr3;

    printf("Enter the size of the arrays: ");
    scanf("%d", &arr1.size);
    arr2.size = arr1.size;

    arr1.A = (int *)malloc(arr1.size * sizeof(int));
    arr2.A = (int *)malloc(arr2.size * sizeof(int));

    printf("Enter the elements of arr1 (sorted): ");
    for (int i = 0; i < arr1.size; i++) {
        scanf("%d", &arr1.A[i]);
    }

    printf("Enter the elements of arr2 (sorted): ");
    for (int i = 0; i < arr2.size; i++) {
        scanf("%d", &arr2.A[i]);
    }

    arr3 = merge(&arr1, &arr2);
    display(*arr3);

   
    return 0;
}
