#include "main.h"

/**
 * main - library
 *_isdigit - function to check if c is a number from 0-9
 * @c: input
 * Return: 1 if true, 0 if false
 */
int _isdigit(int c)
{

if ((c >= 0) && (c <= 9))
return (1);
else
return (0);
}
