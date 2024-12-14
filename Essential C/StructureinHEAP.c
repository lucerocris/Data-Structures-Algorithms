#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int width;
};

int main(void) {
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length=15;
    p->width=10;

    printf("%d %d", p->length, p->width);


}
