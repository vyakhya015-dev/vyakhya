// write a program to calculate the area and perimeter of a rectangle given its length and bredth
#include <stdio.h>
    int main()
        {
            int l=10, b=4, area, perimeter;

            area = l * b;
            printf("area = %d\n", area);

            perimeter = 2 * (l + b);
            printf("perimeter = %d\n", perimeter);

            return 0;

        }
        