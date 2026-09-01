// Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 

#include  <stdio.h>
int main()
{
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if(percentage >=90 && percentage <=100)
    {
        printf("GRADE A");   
    }
    else if(percentage >=80 && percentage <=90)
    {
        printf("GRADE B");
    
    }
    else if(percentage >=70 && percentage <=80)
    {
        printf("GRADE C");
    
    }
    else if(percentage >=60 && percentage <=70)
    {
        printf("GRADE D");
    }
    else 
    {
        printf("GRADE F");
    }
    return 0;
    
}
