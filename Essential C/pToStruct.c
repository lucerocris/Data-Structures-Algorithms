#include <stdio.h>
struct Rectangle
{
    int length;
    int width;
};


int main(void) {
    struct Rectangle r = {10, 5};

    printf("%d %d\n", r.length, r.width);
    struct Rectangle *p = &r;   
    printf("Pointer struct: %d %d", p->length, p->width);

}