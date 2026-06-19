#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int sum = 0, expected;

    scanf("%d", &n);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expected = n * (n + 1) / 2;

    printf("Missing Number = %d", expected - sum);

    return 0;
}