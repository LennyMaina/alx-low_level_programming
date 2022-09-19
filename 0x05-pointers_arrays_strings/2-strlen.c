#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strlen - length of a string
 *@l: variable
 *@s: char
 *Return: length
 */
int _strlen(char *s)
{
int len;
len = strlen (s);
printf("Length = %d", len);
}
