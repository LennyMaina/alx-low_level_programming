#include "main.h"
#include <stdio.h>

/**
 *reset_to_98 - assigning variable to pointer
 *n: variable
 * Return: pointer
 */
void reset_to_98(int *n)
{
int *pt;

pt = *n;
*n = 98;
}

