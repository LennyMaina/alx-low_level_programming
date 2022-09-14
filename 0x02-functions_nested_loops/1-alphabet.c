#include <stdio.h>
#include <main.c>
/**
 * main - print alphabet in small letters
 * Return: always 0
 */
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
