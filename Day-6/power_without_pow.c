#include <stdio.h>

int main() {
    int x, n, result = 1;

    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);

    for(int i = 1; i <= n; i++)
        result *= x;

    printf("Answer = %d", result);

    return 0;
}