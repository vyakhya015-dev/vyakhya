// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int  main()
{ 
    int total_seconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds );

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("hours = %d\n", hours);
    printf("minutes = %d\n", minutes);
    printf("seconds = %d\n", seconds);

    return 0;

    
}