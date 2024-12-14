#include <stdio.h>
#include <stdlib.h>

struct Rectangle 
{
    int length;
    int width;
};

//call by value

void funCallbyValue(struct Rectangle r1) {
    printf("Call by Value: %d %d\n", r1.length, r1.width);
}

//call by address

void funCallbyAdress(struct Rectangle* r1) {
    r1->length = 33;
    r1->width = 55;
    printf("Call by Address: %d %d", r1->length, r1->width);
}

//return a struct: 

void* returnStruct(){
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=15;
    p->width=22;
    return p;
}


int main() {
    struct Rectangle r={10, 5};
    printf("Length %d\nWidth %d\n", r.length, r.width);
    funCallbyValue(r);
    
    printf("Changed to length 33 and width 55 by address:\n");
    funCallbyAdress(&r);

    printf("\n\n");

    struct Rectangle *ptr = returnStruct();
    printf("Returned struct: %d %d", ptr->length, ptr->width);


    return 0;

}