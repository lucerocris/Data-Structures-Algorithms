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

void insertOnSort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    while(arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->length++;
    arr->A[i + 1] = x;

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

    printf("Enter elements (sorted): \n");
    for (int i = 0; i < n; i++) scanf("%d", &arr.A[i]);
    arr.length = n;

    int x;
    printf("Enter element to insert: ");
    scanf("%d", &x);

    insertOnSort(&arr, x);
    display(arr);
    return 0;
}
