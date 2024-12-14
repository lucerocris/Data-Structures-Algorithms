#include <stdio.h>

void fun(int* A, int n) {
    
   for (int i = 0; i < n; i++) {
    printf("%d ", A[i]);

   }

   printf("\n");

}

int main() {
    int A[] = {2, 4, 6, 8, 10};
    int n = 5;

    fun(A, n);
    printf("%d", sizeof(A)/sizeof(int));

    return 0;

}