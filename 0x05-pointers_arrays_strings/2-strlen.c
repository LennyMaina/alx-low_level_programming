#include "main.h"
#include <string.h>

/**
 *_strlen - function length of a string
 *@m: variable
 *@s: char
 *Return: length
 */
int _strlen(char *s)
{
int m = 1;

while (*(s + m) != '\0')
{
++m;
}
return (m);
}
