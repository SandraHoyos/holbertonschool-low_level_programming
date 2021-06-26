#include "holberton.h"
/**
 * print_numbers - imprime los numeros del 0 al 9
 * @i: indice del for
 * Return: void
 */
void print_numbers(void)
{
char i;
 for (i = '0';i <= '9'; i++)
{
_putchar(i);
}
_putchar("\n");
}
