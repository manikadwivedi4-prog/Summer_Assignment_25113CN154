#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book books[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("\nEnter Book %d Details\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &books[i].id);

        printf("Title: ");
        scanf("%s", books[i].title);

        printf("Author: ");
        scanf("%s", books[i].author);
    }

    printf("\nLibrary Records\n");

    for(i = 0; i < 3; i++) {
        printf("\nBook ID: %d", books[i].id);
        printf("\nTitle: %s", books[i].title);
        printf("\nAuthor: %s\n", books[i].author);
    }

    return 0;
}