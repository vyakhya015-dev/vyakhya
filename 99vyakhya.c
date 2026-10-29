//Q100: Print all sub-strings of a string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i, j, k, length;

    printf("Enter a string: ");
    scanf("%99s", str);
    
    length = strlen(str);

    printf("All substrings are:\n");

    for(i = 0; i < length; i++){
        for(j = i; j < length; j++){
            for(k = i; k <= j; k++){
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;

}