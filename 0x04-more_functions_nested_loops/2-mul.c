#include <stdio.h>
#include "main.h"
/**
 *mul- function for multiplying two integers
 *main - multiplication
 *@a: input
 *@b: input
 *Return: multiplication results of the two integers
 */
int mul(int a, int b)
{
int c;
printf("Enter the values of a and b");
scanf("%d%d", &a, &b);
c = a * b;
printf("%d", c);
return (0);
}
