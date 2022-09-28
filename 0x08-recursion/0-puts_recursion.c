#include "main.h"

/**
 * _puts_recursion - function to print string
 * @s: string
 */
void _puts_recursion(char *s)
{
_putchar(*s);
_puts_recursion(s + 1);
_putchar('\n');
}
