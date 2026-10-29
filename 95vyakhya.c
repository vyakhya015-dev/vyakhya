// Reverse each word in a sentence without changing word order.

#include<stdio.h>
#include<string.h>

int main(){
    char str[200], temp;
    int i, j, start = 0, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0;  ; i++){
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0'){
            end = i - 1;
            j = start;

            while(j < end){
                temp = str[j];
                str[j] = str[end];
                str[end] = temp;

                j++;
                end--;
            }
            start = i + 1;
        }
        if(str[i] == '\0' || str[i] == '\n'){
            break;
        }
    }
    printf("Result: %s", str);

    return 0;
    
}