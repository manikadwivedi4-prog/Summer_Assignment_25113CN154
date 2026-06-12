#include <stdio.h>

int armstrong(int n)
{
    int temp = n, sum = 0, digit;

    while(n != 0)
    {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return temp == sum;
}

int main()
{
    int n;

    scanf("%d", &n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}