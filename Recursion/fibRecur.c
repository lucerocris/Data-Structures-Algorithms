#include <stdio.h>

int fib(int n)
{
    if(n <= 1) return n;
    else return fib(n - 2) + fib(n - 1);

} 
//this recursion is excesive recursion
//this is a better way:
int F[100];

int mFib(int n)
{
    
    if (n<=1) {
        F[n] = n;
        return n;
} else {
    if (F[n-2] == -1)
        F[n-2] = mFib(n - 2);
    if (F[n - 1] == -1)
        F[n - 1] = mFib(n - 1);

    return F[n-2] + F[n - 1];
}

 } 


int main() {
    for (int i = 0; i < 100; i++) F[i] = -1;
    printf("%d ", mFib(6));
    return 0;
}