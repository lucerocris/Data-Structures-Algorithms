#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void delete(struct Array *arr, int index)
{
    for (int i = index; i < arr->length - 1; i++ ) {
        arr->A[i] = arr->A[i+1];
    }
    arr->length--;
}

void display(struct Array arr)
{
    printf("Modified array: ");
    for (int i = 0; i < arr.length; i++) printf("%d ", arr.A[i]);
}

int main() {
    struct Array arr;
    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));

    printf("Enter the length of the array: ");
    scanf("%d", &arr.length);

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < arr.length; i++) scanf("%d", &arr.A[i]);

    int index;
    printf("Enter the index that you want to delete: ");
    scanf("%d", &index);
    if (index < 0 || index > arr.length){
        printf("Invalid index.");
        return 0;
    }

    delete(&arr, index);
    display(arr);
    return 0;

}

