// Q95. Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100], c[200];

    printf("Enter first string: ");
    scanf("%99s", a);

    printf("Enter second string: ");
    scanf("%99s", b);

    strcpy(c, a);
    strcat(c, a);

    if(strlen(a) == strlen(b) && strstr(c, b)){
        printf("Rotation");
    }
    else {
        printf("Not Rotation");
    }

    return 0;
    
}