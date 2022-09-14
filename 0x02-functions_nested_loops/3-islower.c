#include <stdio.h>
/**
 *_islower.c - check for lower case
 *Return: always 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
