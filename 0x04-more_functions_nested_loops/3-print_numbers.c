#include "holberton.h"
/**
 * print_numbers - imprime los numeros 0-9.
 *
 *@n entero que da los c+odigos ascii para putchar
 *
 *Return: void
 */
void print_numbers(void)
{
int n;
for (n = 48; n <= 57 ; n++)
{  
_putchar(n);
}
_putchar('\n');
}
