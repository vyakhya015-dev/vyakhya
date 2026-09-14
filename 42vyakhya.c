// Q43: Write a program to check if a number is a strong number.

#include <stdio.h>
int main()
{
    int n, num, digit, i, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;

    while(n > 0)
    {
        digit = n % 10;
        fact = 1;

        for(i = 1; i <= digit; i ++)
        {
            fact = fact * i;
        }
        
        sum = sum + fact;
        n = n / 10;

    }
    if(sum == num)
       printf("Strong number.");
    else 
       printf("Not a strong number.");

       return 0;


}