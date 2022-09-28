#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - reverse string
 * @s: string to be reversed
 */
void _print_rev_recursion(char *s)
{
strrev(*(s));
_putchar(*s);
}
