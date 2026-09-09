// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main()
{
    int n, num, first, last, place = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    last = n % 10;

    while(n >= 10)
    {
        n = n / 10;
        place = place * 10;
    }
    first = n;

    result = num - first * place - last + last * place + first;

    printf("After swapping = %d", result);

    return 0;

}