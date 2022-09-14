#include <stdio.h>
/**
 *_islower - check for lower case
 *@c is the int for argument
 *Return: always 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
