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
int k;

k = *a;
*a = *b;
*b + k;

printf("%d\t%d", *a, *b);
}


