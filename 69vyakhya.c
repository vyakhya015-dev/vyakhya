// Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main()
{
    int a[100], n, k, i, j, last;

    printf("enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for(j = 1; j <= k; j++)
    {
        last = a[n-1];

        for(i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }

        a[0] = last;

    }

    printf("Array after roatation: ");
    for(i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;

}