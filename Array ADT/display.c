#include <stdio.h>
#include <stdlib.h>

struct Array 
{
    int *A;
    int size;
    int length;

};

void display(struct Array arr)
{
    printf("\nElements are: \n");
    for (int i = 0; i < arr.length; i++) printf("%d ", arr.A[i]);
}

int main(void) {
    struct Array arr;
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);
    arr.A=(int *)malloc(arr.size * sizeof(int));
    arr.length = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++) scanf("%d", &arr.A[i]);
    arr.length = n;

    display(arr);
    return 0;
}