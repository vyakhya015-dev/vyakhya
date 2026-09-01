// Q23: Write a program to calculate library fine based on late days.

#include <stdio.h>

int main()
{
    int days, fine;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if(days <= 5)
    {
        fine = days * 2;
        printf("fine = Rs. %d", fine);
    }
    else if(days <= 10)
    {
        fine = days * 4;
        printf("fine = Rs. %d", fine);
    }
    else if(days <= 20)
    {
        fine = days * 6;
        printf("fine = Rs. %d", fine);
    }
    else if(days <= 30)
    {
        fine = days * 6;
        printf("fine = Rs. %d", fine);
    }
    else
    {
        printf("Membership cancelled");
    }
    

    return 0;

}