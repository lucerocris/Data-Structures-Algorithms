/*Power Function
by CodeChum Admin

Write a program that includes a recursive function, as specified in the minimum requirements, that takes two integers x and y and returns the result of x raised to the power of y. In the main, ask for two inputs, x and y, then call the created function. Get the returned value of the function and print the value.
Sample Output 1

Enter the value of x: 2
Enter the value of y: 2
2 raised to the power of 2 is: 4
Sample Output 2

Enter the value of x: 2
Enter the value of y: 8
2 raised to the power of 8 is: 256
Sample Output 3

Enter the value of x: 4
Enter the value of y: 2
4 raised to the power of 2 is: 16*/

#include <stdio.h>

int power(int x, int y)
{
    if (y == 0) return 1;
    return power(x, y-1) * x;
}


int main(void) 
{
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("%d raised to the power of %d is: %d", x, y, power(x, y));
    return 0;
}
    
