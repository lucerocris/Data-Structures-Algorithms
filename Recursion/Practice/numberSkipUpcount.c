/*Number Skipper Upcount
by CodeChum Admin

Write a program that includes a recursive function, as specified in the minimum requirements, that takes an integer n and an integer count which serves as the current number. The function prints all numbers from 1 to n, skipping two numbers each recursion. In the main, ask for an integer n and use the created function.
Sample Output 1

Enter the value of N: 5
1 4
Sample Output 2

Enter the value of N: 10
1 4 7 10
Sample Output 3

Enter the value of N: 19
1 4 7 10 13 16 19

*/

#include <stdio.h>

void printNumbers(int n)
{
    static int x = 1;
    if (n > 0) {
       printNumbers(n - 1);
        if (n == x) {
            printf("%d ", n);
            x += 3;
            
        }
    }
}

int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printNumbers(n);
    
}
