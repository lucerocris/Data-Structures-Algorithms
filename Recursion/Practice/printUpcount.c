/*Print Upcount
by CodeChum Admin

Write a program that includes a recursive function, as specified in the minimum requirements, that takes an integer n and prints the number 1 up to n using a recursion. In the main, ask for an integer n and use the created function.
Sample Output 1

Enter a number: 5
1 2 3 4 5
Sample Output 2

Enter a number: 10
1 2 3 4 5 6 7 8 9 10
Sample Output 3

Enter a number: 15
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15*/

#include <stdio.h>

void upCount(int n) {
    if (n > 0) {
        upCount(n - 1);
        printf("%d ", n);
    }
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    upCount(n);
    return 0;
    
}