//Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

#include <stdio.h>

int main(){
    int a[100], n, i, j;
    int previousgreater;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 1 || n > 100){
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter array elememts:\n");

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Previous greater elements:\n");
    for(i = 0; i < n; i++){
        previousgreater = -1;

        for(j = i - 1; j >= 0; j--){
            if(a[j] >a[i]){
            previousgreater = a[j];
            break;
        }
    }
    printf("%d", previousgreater);

    if(i < n - 1){
        printf(", ");
    }
}
printf("\n");

return 0;

}