#include <stdio.h>
//tail recursion
void fun1 (int n) {
    if (n>0) {
        printf("%d ", n);
        fun1(n-1);
    }
}

//head recursion
void fun2 (int n) {
    if (n > 0) {
        fun2(n-1);
        printf("%d ", n);
    }
}

int main(void) {
    int x = 3;
    fun1(x);
    printf("\n");
    fun2(x);
    return 0;
}
/*HOW RECURSION WORK????

    recursions has 2 phases calling and returning.
    or ascending and descending
    ang difference sa loop and recursion kay ang recursion 2 phases ang loop kay puros ra ascending */

