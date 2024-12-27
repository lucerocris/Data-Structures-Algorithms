#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void rearrange(struct Array *arr)
{
    int i = 0;
    int j = arr->length-1;

    while (i<j)
    {
        while (arr->A[i] < 0) i++;
        while (arr->A[j] >= 0) j--;
        swap(&arr->A[i], &arr->A[j]);
    }
}



void display(struct Array arr) {
    printf("\nElements are: \n");
    for (int i = 0; i < arr.length; i++) printf("%d ", arr.A[i]);

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

    rearrange(&arr);
    display(arr);
    return 0;
}
