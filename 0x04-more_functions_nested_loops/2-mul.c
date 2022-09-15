#include <stdio.h>
#include "main.h"
/**
 *mul- function for multiplying two integers
 *main - library function
 *@a: input
 *@b: input
 *Return: multiplication results of the two integers
 */
int mul(int a, int b)
{
int c;
printf("Enter the values of a and b");
scanf("%d%d\n", &a, &b);
c = a * b;
printf("%d\n", c);
return (0);
}
