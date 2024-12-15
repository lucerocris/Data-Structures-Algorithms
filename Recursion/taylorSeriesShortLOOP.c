#include <stdio.h>

double e(int x, int n) 
{
    double s = 1;
    for (int i = n; i > 0; i--) {
        s = 1 + (x * s) / i;
    }
    return s;        
}

int main() {
    printf("%lf ", e(1, 4));
    return 0;
}