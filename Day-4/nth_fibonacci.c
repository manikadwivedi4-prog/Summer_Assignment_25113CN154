#include <stdio.h>

int main() 
{
    int n, a = 0, b = 1, c;

    printf("Enter n\n");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) 
    {
        c = a + b;
        a = b;
        b = c;
    }

    printf("Nth term = %d", a);

    return 0;
}