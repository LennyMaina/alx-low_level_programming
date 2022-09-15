#include "main.h"
#include <stdio.h>
/**
 *main - library
 *_isdigit - check if c is 0 or letter
 *@c: input
 * Return:(1) if true (0) if false
 */

int _isdigit(int c)
{
if ((c >= 0) && (c <= 9))
return (1);
else
return (0);
}
