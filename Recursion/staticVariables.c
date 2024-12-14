#include <stdio.h>

int fun(int n) {
    if (n > 0) 
    {
        return fun(n-1) + n;
    }

    return 0;
}

int fun1(int n) {
    static int x = 0;
    if (n > 0) {
        x++;
        return fun1(n-1) + x;
    }
    return 0;
}

int main() {
    int a = 5;

    //without static variable
    printf("%d\n", fun(a));

    
    //static variable
    printf("%d \n", fun1(a));
    return 0;
}