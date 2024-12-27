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

int linSearch(struct Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        
        if (arr.A[i] == key) {
             swap(&arr.A[i], &arr.A[0]);
             return 0;
        }
    }
    return -1;
}

void display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++) printf("%d ", arr.A[i]);
}



int main(void) {
    struct Array arr;
    int key;
    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));

    printf("Enter the length of the array: ");
    scanf("%d", &arr.length);

    printf("Enter the elements: \n");
    for (int i = 0; i < arr.length; i++) scanf("%d", &arr.A[i]);

    printf("What element do you want to search in the array: ");
    scanf("%d", &key);

    printf("The element is at index %d", linSearch(arr, key));
  
    printf("\nModified array: ");
    display(arr);
    return 0;
 
}