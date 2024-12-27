#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Array
{
    int *A;
    int size;
    int length;
};

int binSearch(struct Array arr, int low, int high, int key)
{
    int mid;
    while (low <= high)
    {
        mid = floor((low + high) / 2);
        if (key == arr.A[mid]) return mid;
        else if (key < arr.A[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    struct Array arr;
    int key;
    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);
    arr.A = (int * )malloc(arr.size * sizeof(int));

    printf("Enter the length of the array: ");
    scanf("%d", &arr.length);

    printf("Enter the elements of the array (in ascending order): ");
    for (int i = 0; i < arr.length; i++) scanf("%d", &arr.A[i]);

    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    printf("The element is at index %d", binSearch(arr, arr.A[0], arr.A[arr.length-1], key));
    return 0;


}
