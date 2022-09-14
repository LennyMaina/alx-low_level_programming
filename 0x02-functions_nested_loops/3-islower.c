#include <stdio.h>
/**
 *_islower - check for lower case
 *Return: always 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
putchar('1');
else
putchar('0');
return (0);
}
