#include <stdio.h>

int main() 
{
    int n, temp, digit, sum = 0;

    printf("Enter a number\n");
    scanf("%d", &n);

    temp = n;

    while(n != 0) 
    {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if(sum == temp)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}