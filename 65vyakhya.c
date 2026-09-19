// Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main()
{
    int a[100], i, n, num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    for(i = n - 1; i >= 0 && a[i] > num; i--)
    {
        a[i + 1] = a[i];
    }

    a[i + 1] = num;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0; 


}