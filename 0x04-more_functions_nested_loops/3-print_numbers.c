#include "main.h"
/**
 *print_numbers - 0 to 9
 *@n: input
 *Return: 0 to 9
 */

void print_numbers(void)
{
int n = 0;
while (n <= 9)
{
_putchar(n);
++n;
}
_putchar('\n');
return (0);
}
