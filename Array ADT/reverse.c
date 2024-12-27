#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(struct Array *arr)
{
    for (int i = 0, j = arr->length - 1; i < j; i++, j--) {
        swap(&arr->A[i], &arr->A[j]);
    }
}

void display(struct Array arr) {
    for (int i = 0; i < arr.length; i++) printf("%d ", arr.A[i]);
}



int main() {
    struct Array arr;
    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));

    printf("Enter the length of the array: ");
    scanf("%d", &arr.length);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < arr.length; i++) scanf("%d", &arr.A[i]);

    reverse(&arr);
    display(arr);


}