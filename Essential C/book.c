#include <stdio.h>
#include <string.h> // For removing newline

struct Book 
{
    char title[100];
    char author[100];
    int yearPublished;
    float price;
};

int main(void) {
    struct Book inv;
    
    printf("Enter book title: ");
    fgets(inv.title, sizeof(inv.title), stdin);
    inv.title[strcspn(inv.title, "\n")] = '\0'; // Remove newline

    printf("Enter book author: ");
    fgets(inv.author, sizeof(inv.author), stdin);
    inv.author[strcspn(inv.author, "\n")] = '\0'; // Remove newline

    printf("Enter year published: ");
    scanf("%d", &inv.yearPublished);

    printf("Enter price: ");
    scanf("%f", &inv.price);

    printf("\nBook Details:\n");
    printf("Title: %s\n", inv.title);
    printf("Author: %s\n", inv.author);
    printf("Year Published: %d\n", inv.yearPublished);
    printf("Price: $%.2f\n", inv.price);
    
    return 0;
}
