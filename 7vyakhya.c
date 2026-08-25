// write a program to find and dispay the sum of first n natural numbers

#include <stdio.h>
  int  main()
  {
    int n, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("sum = %d\n", sum);

    return 0;


  }