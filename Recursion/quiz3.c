#include <stdio.h>




int f(int *x, int c) {
    c = c - 1;
    if (c == 0) return 1;
    (*x) = (*x) + 1;
    return f(x, c) * (*x);
}

int main() {
    int p = 5;
    int result = f(&p, p);
    printf("Return value: %d\n", result);
    printf("Final value of p: %d\n", p);
    return 0;
}
