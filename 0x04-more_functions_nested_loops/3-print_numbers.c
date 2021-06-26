#include "holberton.h"
/**
 * print_numbers - imprime los numeros del 0 al 9
 * @c: variable caracter
 * Return: void
 */
void print_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}
