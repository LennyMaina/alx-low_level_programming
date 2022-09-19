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
int n;

n = *a;
*a = *b;
*b = n;
printf("*a=%d, *b=%d\n", *a, *b);
}


