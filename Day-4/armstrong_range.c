#include <stdio.h>

int main() 
{
    int start, end, i, temp, digit, sum;

    printf("Enter range\n");
    scanf("%d %d", &start, &end);

    for(i = start; i <= end; i++) 
    {
        temp = i;
        sum = 0;

        while(temp != 0) 
        {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if(sum == i)
            printf("%d ", i);
    }

    return 0;
}