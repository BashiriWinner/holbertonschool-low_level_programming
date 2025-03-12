#include "main.h"
#inlcude <stdio.h>
/**
 * print_diagsums - check the code 
 * @a: a
 * @size: size
 * Return: Always 0
 */
 void print_diagsums(int *a, int size)
 {
     int i;
     int j;
     sum1 = 0;
     sum2 = 0;
     for(i = 0; i <= (size * size); i = i + size + 1)
     {
         sum1 = sum1 + a[i];
     }
     for(size - 1; j <= (size * size) - size; j + size - 1)
     {
         sum2 = sum2 + a[j];
     }
     printf("%d, %d\n", sum1, sum2);
 }
