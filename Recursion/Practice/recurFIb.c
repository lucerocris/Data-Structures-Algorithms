/*Recursive Fibonacci
by CodeChum Admin

Write a program that includes a recursive function, as specified in the minimum requirements, that returns the nth Fibonacci number. The function should take an integer n as input. In the main, ask for an integer input n and use the created function. Get the returned value of the function and print the value.
Sample Output 1

Enter a positive integer: 12
The 12th Fibonacci number is 144
Sample Output 2

Enter a positive integer: 4
The 4th Fibonacci number is 3
Sample Output 3

Enter a positive integer: 16
The 16th Fibonacci number is 987*/


#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1) return n;
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main(void) {
    printf("Enter a positive integer: ");
    int n;
    scanf("%d", &n);
    printf("The %dth Fibonacci number is %d", n, fibonacci(n));
    return 0;
}