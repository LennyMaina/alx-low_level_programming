#include "main.h"
#include <stdio.h>

/**
 *swap_int - swapping
 *@a: input values
 *@b: input values
 *Return: integers
 */
void swap_int(int *a, int *b)
{
*a = 98;
*b = 42;
*b = *a + *b;
*a = *b - *a;
*b = *b - *a;
printf("%d\t%d", *a, *b);
}


