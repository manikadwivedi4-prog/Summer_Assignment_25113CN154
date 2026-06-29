#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter Employee %d Details\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Records\n");

    for(i = 0; i < 5; i++) {
        printf("\nID: %d", emp[i].id);
        printf("\nName: %s", emp[i].name);
        printf("\nSalary: %.2f\n", emp[i].salary);
    }

    return 0;
}