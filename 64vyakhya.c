// Q65: Search in a sorted array using binary search.

#include <stdio.h>
int main()
{
    int a[100], n, i, search;
    int low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

    }
    printf("Enter element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while(low <= high) 
    {
        mid = (low + high) / 2;

        if(a[mid] == search)
        {
            printf("Element found");

            return 0;
        }
        else if(search > a[mid])
        {
            low = mid + 1; 
        }
        else
        {
            high = mid - 1;
        }
        
    }
    printf("Element not found");

    return 0;
    
}