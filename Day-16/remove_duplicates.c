#include <stdio.h>

int main()
{
    int arr[100], n, i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array without duplicates:\n");

    for(i = 0; i < n; i++)
    {
        int duplicate = 0;

        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }

        if(!duplicate)
            printf("%d ", arr[i]);
    }

    return 0;
}