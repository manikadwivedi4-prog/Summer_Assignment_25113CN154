# include<stdio.h>

int main() 
{
    int num;
    int count = 0;

    printf("Enter an integer\n");
    scanf("%d", &num);

    int temp = num;

    do 
    {
        count++;
        num /= 10;
    } while (num != 0);

    printf("The number %d has %d digits\n", temp, count);

    return 0;
}