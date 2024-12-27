#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    
};

void insert(struct Array *arr, int index, int x) {
    
        for (int i = arr->size; i > index; i--) arr->A[i] = arr->A[i - 1];
         arr->A[index] = x;
         arr->size++;
    
}

void display(struct Array arr) {
    printf("The modified array is: ");
    for (int i = 0; i < arr.size; i++) printf("%d ", arr.A[i]);
}


int main(void) {
    struct Array arr;
    int index, x;
    
    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < arr.size; i++) scanf("%d", &arr.A[i]);
    
    printf("Enter the index where you want to insert the element: ");
    scanf("%d", &index);
    if (index < 0 || index > arr.size) {
        printf("Invalid index.");
        return 0;
    }
    
    printf("Enter the value you want to insert: ");
    scanf("%d", &x);
    
    insert(&arr, index, x);
    display(arr);
    return 0;
    
}