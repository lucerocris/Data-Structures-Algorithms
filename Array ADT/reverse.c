#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};



int main() {
    struct Array arr;
    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));

    printf("Enter the length of the array: ");
    scanf("%d", &arr.length);
    

}