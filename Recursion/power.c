#include <stdio.h>

int power(int x, int y) {
   if (y == 0) return 1;
   else return power(x, y-1) * x;
    
}

int main(void) {
    int x = 2, y = 4;
    int powa = power(x, y);
    printf("%d raised to the power of %d is: %d", x, y, powa);
    return 0;
    
}