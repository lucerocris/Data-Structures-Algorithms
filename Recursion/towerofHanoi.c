#include <stdio.h>

void TOH(int n, int A, int B, int C)
{
    if (n > 0 )
    {
        TOH(n-1, A, C, B);
        printf("From %d to %d\n", A, C);
        TOH(n-1, B, A, C);
    }
}

int main()
{
    int n;
    printf("Enter number of Disks: ");
    scanf("%d", &n);
    TOH(n, 1, 2, 3);
    return 0;
}