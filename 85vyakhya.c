// Q86: Check if a string is a palindrome.

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    gets(str);

    while(str[length] != '\0')
    {
        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}