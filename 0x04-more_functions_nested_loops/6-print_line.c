#include "holberton.h"
/**
 * print_line - prints a line of n _ with putchar
 *
 * @n: variable tamaño de linea
 *
 * Return: void
 */
void print_line(int n)
{
int i;
if (n >= 0)
{
for (i = 0; i < n; i++)
{
_putchar(95);
}
}
_putchar('\n');
}
