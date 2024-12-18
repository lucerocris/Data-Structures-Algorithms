
/*Sum of Digits
by CodeChum Admin

Write a program that includes a recursive function, as specified in the minimum requirements, that takes an integer n and returns the sum of its digits. For example, the sum of digits of 12345 is 1 + 2 + 3 + 4 + 5 = 15. In the main, ask for an integer input n then call the created function. Get the returned value of the function and print the value.
Sample Output 1

Enter an integer: 12345
Sum of digits: 15
Sample Output 2

Enter an integer: 6789
Sum of digits: 30
Sample Output 3

Enter an integer: 24642
Sum of digits: 188*/


#include <stdio.h>

int sumOfDigits (int n) {
    if (n == 0) return 0;
    return sumOfDigits(n / 10) + n % 10;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Sum of digits: %d", sumOfDigits(n));
    return 0;
}