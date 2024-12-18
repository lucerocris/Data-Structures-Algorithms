/*Recursive Sum
by CodeChum Admin

Write a program that includes a recursive function, as specified in the minimum requirements, that takes an integer n then sums all numbers from 1 to n. Print the sum after. In the main, ask for an integer n and use the created function.
Sample Output 1

Enter a number: 1
Sum: 1
Sample Output 2

Enter a number: 5
Sum: 15
Sample Output 3

Enter a number: 10
Sum: 55*/


#include <stdio.h>

int sumUpTo (int n) {
    if (n == 0) return 0;
    return sumUpTo(n - 1) + n;
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum: %d", sumUpTo(n));
    return 0;
}