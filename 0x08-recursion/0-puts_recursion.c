#include "holberton.h"
/**
 * _puts_recursion - Imprime una cadena seguida por una nueva linea
 * @s: Cadena a imprimir
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
