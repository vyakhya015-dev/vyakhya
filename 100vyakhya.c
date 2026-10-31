//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence.Print -1, -1 if the target is not present.
#include<stdio.h>

int main(){
    int a[100], n, target;
    int i, first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++){
        if(a[i] == target){
             if(first == -1){
                first = i;
             }
             last = i;
        }
        
    }
    printf("First occurence: %d\n", first);
    printf("Last occurence: %d", last);

    return 0;

}
