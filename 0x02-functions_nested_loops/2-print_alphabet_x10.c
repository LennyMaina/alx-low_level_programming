#include <stdio.h>
/**void print_alphabet_x10 - print a to z 10 times
 * Return: always 0
 */
void print_alphabet_x10(void)
{
char c, i;

for (i = '1'; i <= 10 ; ++i)
{
for (c = 'a' ; c <= 'z' ; ++c)
putchar(c)
}
putchar('\n');
}
