#include "main.h"

/**
 *print_rev - prints to string in reverse
 *@str: Strin to print
 *Return: Nothing
 */
void print_rev(char *str)
{
int i = 0, strln = 0;

while (*(s + i) != '\0')
{
i++;
}
strln = _strlen(str);
for (i = (strln - 1); i >= 0; i--)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
