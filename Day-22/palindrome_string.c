#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0')
        length++;

    if(str[length - 1] == '\n')
        length--;

    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}