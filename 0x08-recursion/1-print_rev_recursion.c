#include "holberton.h"
/**
 * _print_rev_recursion - imprime en reversa
 * @s: Cadena a imprimir en reversa
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
