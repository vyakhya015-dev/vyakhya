// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

int main(){
    int a[100], n, i, j;
    int count, majority = -1;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 1 || n > 100){
        printf("Invalid array size\n");
        return 0;
    }
    printf("Enter array elements:\n");

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++){
        count = 0;
        for (j = 0; j < n; j++){
            if(a[i] == a[j]){
                count ++;
            }
        }
        if(count > n / 2){
            majority = a[i];
            found = 1;
            break;
        }
    }
    if(found == 1){
        printf("Majority element:%d\n", majority );
    }
    else{
        printf("-1\n");
    }
    return 0;

}