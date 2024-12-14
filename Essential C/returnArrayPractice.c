#include <stdio.h>
#include <stdlib.h>

int* createZeroArray (int size) {
    int *p;
    p = (int *)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++) p[i] = 0;
    return p;
}

int *createValueArray (int size, int value) {
    int *p;
    p = (int *)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++) p[i] = value;
    return p;
}

int *reverseArray (int size) {
    int *p, count = size; 
    p = (int *)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++) p[i] = count--;
    return p;
}

int main(void) {

    // Zero Array
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int* zeroArray;
    zeroArray = createZeroArray(n);
    printf("Zero Arrray: ");
    for (int i = 0; i < n; i++) printf("%d ", zeroArray[i]);
    printf("\n\n");

    // Value Array:
    int value;
    printf("Enter array size and value: ");
    scanf("%d %d", &n, &value);
    int* valueArray;
    valueArray = createValueArray(n, value);
    printf("Value Array: ");
    for (int i = 0; i < n; i++) printf("%d ", valueArray[i]);
    
    printf("\n\n");
    //Reverse Array
    printf("Enter array size: ");
    scanf("%d", &n);
    int* revArray;
    revArray = reverseArray(n);
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) printf("%d ", revArray[i]);
    

}