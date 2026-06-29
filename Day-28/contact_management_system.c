#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter Contact %d Details\n", i + 1);

        printf("Name: ");
        scanf("%s", contacts[i].name);

        printf("Phone Number: ");
        scanf("%s", contacts[i].phone);
    }

    printf("\nContact List\n");

    for(i = 0; i < 5; i++) {
        printf("\nName: %s", contacts[i].name);
        printf("\nPhone: %s\n", contacts[i].phone);
    }

    return 0;
}