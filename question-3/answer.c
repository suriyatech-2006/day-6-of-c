// Structure Book: read and display one book's details.
#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main(void) {
    struct Book b;

    printf("Enter title: ");
    scanf(" %99[^\n]", b.title);
    printf("Enter author: ");
    scanf(" %99[^\n]", b.author);
    printf("Enter price: ");
    scanf("%f", &b.price);

    printf("\nBook Details\n");
    printf("Title: %s\nAuthor: %s\nPrice: %.2f\n",
           b.title, b.author, b.price);
    return 0;
}
