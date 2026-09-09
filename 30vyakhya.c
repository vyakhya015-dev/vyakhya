//  Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main()
{
    int n, binary = 0, place = 1, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    while(n > 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;

        n = n / 2;
        place = place * 10;
    }

    printf("Binary = %d", binary);

    return 0;

}