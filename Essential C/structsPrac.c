#include <stdio.h>

struct Rectangle
{
    int length;
    int width;
};

int main(void) {
    struct Rectangle yeah;
    yeah.length = 15;
    yeah. width = 20;
    printf("Area of a rectangle is %d", yeah.length*yeah.width);
    return 0;
}
