// Q61: Search for an element in an array using linear search.

#include<stdio.h>

int main()
{
    int a[100], n, i, search;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            printf("Element found");
            break;

        }
    }

    if(i == n)
    printf("Element not found");


    return 0;

    
}