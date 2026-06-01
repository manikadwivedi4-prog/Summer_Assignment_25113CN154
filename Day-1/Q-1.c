# include<stdio.h>

int main()

{
    int N , sum=0;
    printf("Enter the limit\n");
    scanf("%d", &N);

    for (int i = 1; i <= N; i= i +1)

    {
        sum = sum + i;
    }
    
    printf("%d\n", sum);

    return 0;

}