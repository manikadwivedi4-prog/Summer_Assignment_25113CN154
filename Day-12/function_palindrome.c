#include <stdio.h>

int palindrome(int n)
{
    int temp = n, rev = 0;

    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return temp == rev;
}

int main()
{
    int n;

    scanf("%d", &n);

    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}