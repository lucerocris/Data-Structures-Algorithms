#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void display(struct Array arr) {
    printf("\nElements are: \n");
    for (int i = 0; i < arr.length; i++) printf("%d ", arr.A[i]);
    
}

void add(struct Array *arr, int x) {
    if (arr->length < arr->size) {
        arr->A[arr->length] = x;
        arr->length++;
    } else {
        printf("Array is full. Cannot add more elements.\n");
    }
}

int main() {
    struct Array arr;
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);
    arr.A=(int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: \n");
    for (int i = 0; i < n; i++) scanf("%d", &arr.A[i]);
    arr.length = n;

    int x;
    printf("Enter number to add: ");
    scanf("%d", &x);


    add(&arr, x);
    display(arr);
    return 0;
}
