#include <stdio.h>
#include <stdlib.h>

struct Array 
{
    int *A;
    int size;
};

int findMax(struct Array arr) {
    int max = arr.A[0];
    for (int i = 0; i < arr.size; i++) {
        if (arr.A[i] > max) max = arr.A[i];
    }

    return max;

}

void findMissing(struct Array arr) {
    struct Array arr1;
    arr1.size = findMax(arr) + 1;
    arr1.A = (int *)malloc(arr1.size * sizeof(int));
    for (int i = 0; i < arr1.size; i++) arr1.A[i] = 0;

    for (int i = 0; i < arr.size; i++) {
        arr1.A[arr.A[i]] = 1;
    }

    for (int i = 1; i < arr1.size; i++) {
        if (arr1.A[i] == 0) printf("%d ", i);
    }

}

int main() {
    struct Array arr;
    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);
    arr.A=(int *)malloc(arr.size * sizeof(int));

    printf("Enter the elements of the array: ");
    for (int i = 0; i < arr.size; i++) scanf("%d", &arr.A[i]);

    printf("Missing element(s): ");
    findMissing(arr);
    return 0;

}
