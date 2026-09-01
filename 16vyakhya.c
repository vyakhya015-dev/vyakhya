// Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>

int  main()
{
    int a, b, c, d;

    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d > 0)
    {
         printf("Roots are real and different.");
    
    }
    else if(d == 0)
    {
        printf("Roots are real and equal.");
    
    }
    else 
    {
        printf("Roots are imaginary");
    }     
     
    return 0;

}
