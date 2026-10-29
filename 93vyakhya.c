// Q94. Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main(){
     char str[200], word[200];
     int i, start = 0, len = 0, max = 0;

     printf("Enter a sentence: ");
     fgets(str, sizeof(str), stdin);

     for(i = 0;  ; i++){
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0'){
            if(len > max){
                max = len;
                strncpy(word, &str[start], len);
                word[len] = '\0';
            }
            len = 0;
            start = i + 1;
        }
        else {
            len++;
        }
        if(str[i] =='\0'){
            break;
        }
     }
     if(max > 0){
        printf("Longest word: %s, word");
     }
     else {
        printf("NO word found");
     }

     return 0;
}