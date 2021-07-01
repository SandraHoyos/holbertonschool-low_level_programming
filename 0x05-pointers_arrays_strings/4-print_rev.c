#include "holberton.h"
/**
 * print_rev - function that prints a string in reverse
 * @a:
 *
 * return:
 */
void print_rev(char *s)
{
int a;

for (a = 0 ; s[a] != '\0' ; a++)
{
}
for (a = a - 1 ; a >= 0 ; a--)
{
putchar(s[a]);
}
putchar('\n');
}
