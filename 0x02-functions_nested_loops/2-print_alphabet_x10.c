#include <stdio.h>
/**
 *main - print a to z 10 times
 *Return: always 0
 */
main(void)
{
char c, i;

for (i = '0'; i <= 9 ; ++i)
{
for (c = 'a' ; c <= 'z' ; ++c)
{
putchar(c);
}
}
}
