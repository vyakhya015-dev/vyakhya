// Q24: Write a program to calculate electricity bill based on units consumed with these rates: 

#include <stdio.h>

int main ()
{
    int bill, days;

    printf("Enter number of days: ");
    scanf("%d", &days);

    if(days <= 100 )
    {
        bill = days * 5;
        printf("bill = Rs. %d", bill);
    }

    else if(days <= 200 )
    {
        bill = days * 7;
        printf("bill = Rs. %d", bill);

    }
    else if(days <= 300 )
    {
        bill = days * 10;
        printf("bill = Rs. %d", bill);

    }
    else 
    {
        bill = days * 12;
        printf("bill = Rs. %d", bill);
    }

    return 0;


}