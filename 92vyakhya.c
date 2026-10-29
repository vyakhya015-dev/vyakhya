// Q93. Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    int i, j, count = 0;

    printf("Enter first string: ");
    scanf("%99s", a);

    printf("Enter second string: ");
    scanf("%99s", b);

    if(strlen(a) != strlen(b)) {
        printf("Not anagrams");
        return 0;
    }

    for(i = 0; a[i] != '\0'; i++){
        for(j = 0; b[j] != '\0'; j++){
            if(a[i] == b[j]){
                count++;
                b[j] = '*';
                break;
            }
        }
    }
    if(count == strlen(a)){
        printf("Anagrams");
    }
    else{
        printf("Not Anagrams");
    }

    return 0;

}