#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Imprime números seguidos de new line
 * @separator: separador a imprimir entre números
 * @n: cantidad de números a imprimir
 *
 * Return: Vacio
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int  numero;
unsigned int i;
va_list lista;
va_start(lista, n);

for (i = 0; i < n; i++)
{
numero = va_arg(lista, int);
printf("%i", numero);
if (separator && i < n - 1)
printf("%s", separator);
} 
printf("\n");
va_end(lista);
}
