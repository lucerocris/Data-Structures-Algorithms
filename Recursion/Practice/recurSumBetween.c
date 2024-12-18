/*Recursive Sum Between
by CodeChum Admin

Write a program that includes a recursive function, as specified in the minimum requirements, that takes an integer n then sums all numbers between 1 to n (both 1 and n are exclusive). Print the sum after. In the main, ask for an integer n and use the created function.
Sample Output 1

Enter the value of N: 20
The sum of numbers from 1 to 20 is: 190
Sample Output 2

Enter the value of N: 35
The sum of numbers from 1 to 35 is: 595
Sample Output 3

Enter the value of N: 65
The sum of numbers from 1 to 65 is: 2080*/

#include <stdio.h>

int sum(int n) {
    if (n == 0) return 0;
    return sum(n - 1) + n;
}

int main(void) {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("The sum of numbers from 1 to %d is: %d", n, sum(n - 1));
    return 0;
}