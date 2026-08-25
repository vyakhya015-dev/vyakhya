// Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>
  int  main()
            {
                int a = 20, b = 40;

                printf("Before swapping: a = %d, b = %d\n", a, b);

                a = a + b;
                b = a - b;
                a = a - b;
                
                printf ("After swapping: a = %d, b = %d\n", a, b);

                return 0;

                
            }