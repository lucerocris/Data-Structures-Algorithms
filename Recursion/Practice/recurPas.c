#include <stdio.h>

int pascal(int n, int r) {
    if (n == r || r == 0) {
        return 1;
    }
    return pascal(n - 1, r - 1) + pascal(n - 1, r);
}

int main(void) {
    int n, r = 1;
    printf("Enter a row number: ");
    scanf("%d", &n);
    printf("Row %d of Pascal's Triangle is: \n", n);
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pascal(i, j));

        }
        printf("\n");
    }
    return 0;
}