// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
int  main()
{
    float p, r, SI, CI, amount;
    int t, i;

    printf("Enter principal: ");
    scanf("%f", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%d", &t);

    //Simple Interest
    SI = (p * r * t) / 100;

    //Compund interest
    amount = p;

    for(i = 1; i<= t; i++)
    { 
        amount = amount + (amount + r / 100);
    }
    CI = amount - p;

    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;


}