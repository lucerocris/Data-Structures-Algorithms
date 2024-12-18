/*Odd Number Upcount
by CodeChum Admin

Write a program that includes a recursive function, as specified in the minimum requirements, that takes an integer n then prints all odd numbers from 1 up to n. In the main, ask for an integer n and use the created function.
Sample Output 1

Enter the value of N: 5
Odd numbers from 1 to 5 are: 1 3 5
Sample Output 2

Enter the value of N: 10
Odd numbers from 1 to 10 are: 1 3 5 7 9
Sample Output 3

Enter the value of N: 15
Odd numbers from 1 to 15 are: 1 3 5 7 9 11 13 15*/

#include <stdio.h>

void oddUpCount(int n) {
   if (n > 0) {
       oddUpCount(n - 2);
       printf("%d ", n);
   } 
}

int main(void) {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Odd numbers from 1 to %d are: ", n);
    (n % 2 == 0) ? oddUpCount(n - 1) : oddUpCount(n);
    return 0;
}