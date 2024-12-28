#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int *A;
  int size;  
};

int findMissing(struct Array arr)
{
    int diff = arr.A[0];
    for (int i = 0; i < arr.size; i++)
    {
        if (arr.A[i] - i != diff) {
            while (diff < arr.A[i] - i) {
                printf("%d ", i + diff);
                diff++;
            }
        }
    }
}

int main() {
    struct Array arr;
    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);
    arr.A=(int *)malloc(arr.size * sizeof(int));

    printf("Enter the elements of the array (ascending): ");
    for (int i = 0; i < arr.size; i++) scanf("%d", &arr.A[i]);

    printf("Missing element is: ");
    findMissing(arr);
    
    return 0;


}