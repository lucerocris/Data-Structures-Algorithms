#include <stdio.h>

int sum(int n) {
    if (n == 0) return 0;
    else return sum(n - 1) + n;
}

int main(void) {
    printf("%d", sum(5));
    return 0;
}