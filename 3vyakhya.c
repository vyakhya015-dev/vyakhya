//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
     int main()
     {
        int pi = 3.14, r = 6, area, circumference;

        area = pi * r * r;
        printf("area = %d\n", area);

        circumference = 2 * pi * r;
        printf("circumference = %d\n", circumference);

        return 0;
        
     }