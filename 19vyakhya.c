// Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main()
{
    int day;
    
    printf("Enter a  number (1-7): ");
    scanf(" %d ", &day );

    switch(day)
    {
        Case1:
            printf("monday");
            break;
         
        Case2:
            printf("tuesday");
            break;
        Case3:
            printf("wedenesday");
            break;

        Case4:
            printf("thursday");
            break;

        Case5:
            printf("friday");
            break;

        Case6:
            printf("saturday");
            break;

        Case7:
            printf("sunday");
            break;
            
        default:
            printf("Invalid Number");    
                    
    }
       
    return 0;


}