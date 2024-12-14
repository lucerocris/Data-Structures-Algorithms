#include <stdio.h>
#include <stdlib.h>

int *array(int size) {
    int *p;
    p = (int *)malloc(size*sizeof(int));
    for (int i=0; i<size;i++) {
        p[i]=i+1;
    }
    return (p);
}

int main() {
    int *a;
    int n = 5;

    a = array(n);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}