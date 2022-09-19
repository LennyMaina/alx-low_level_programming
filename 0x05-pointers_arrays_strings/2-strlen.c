#include "main.h"
#include <string.h>

/**
 *_strlen - function length of a string
 *@i: variable
 *@s: char
 *Return: length
 */
int _strlen(char *s)
{
int i = 1;

while (*(s + i) != '\0')
{
++i;
}
return (i);
}
