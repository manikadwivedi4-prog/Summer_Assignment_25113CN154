# include<stdio.h>

int main()
{
    int N,fac=1;
    printf("Enter the number\n");
    scanf("%d",&N);

    for (int i=1; i<=N; i++)
    {
        fac=fac*i;
    }
    
    printf("Factorial of the number is : %d\n",fac);

    return 0;
} 