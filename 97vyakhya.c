//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Abbreviated name: ");

    for(i = 0; name[i] != '\0'; i++){
        if(i == 0 && name[i] != ' '){
            printf("%c.", name[i]);
        }
        else if(name[i] == ' ' && name[i + 1] != ' '
        && name[i + 1] != '\0'
        && name[i + 1] != '\n'){ 
            int j = i + 1;
            int k = j;

            while(name[k] != '\n'){
                k++;
            }

            if(name[k] == ' ' && name[k + 1] != '\0'
            && name[k + 1] != '\n'){
                printf("%c.", name[j]);
            }
            else{
                printf(" %s", &name[j]);
                break;
            }
        }
    }

    return 0;

    
}