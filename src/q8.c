// Write a C program that defines a structure Book with members: title, author, and price. 
// Allow the user to enter details of n books and then display all books whose price is above a 
// user-defined value.
#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    float price;
};
int main() {
    int n, i;
    float minPrice;
    printf("Enter number of books: ");
    scanf("%d", &n);
    struct Book books[n];
    for (i = 0; i < n; i++) {
        printf("\nEnter details of book %d\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    printf("\nEnter the minimum price: ");
    scanf("%f", &minPrice);
    printf("\nBooks with price above %.2f:\n", minPrice);
    for (i = 0; i < n; i++) {
        if (books[i].price > minPrice) {
            printf("\nTitle: %s", books[i].title);
            printf("\nAuthor: %s", books[i].author);
            printf("\nPrice: %.2f\n", books[i].price);
        }
    }

    return 0;
}
