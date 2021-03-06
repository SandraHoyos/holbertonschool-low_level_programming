#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Imprime cadenas seguidos de new line
 * @separator: separador a imprimir entre cadenas
 * @n: cantidad de cadenas a imprimir
 *
 * Return: Vacio
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *cadena;
unsigned int i;
va_list lista;
va_start(lista, n);

for (i = 0; i < n; i++)
{
cadena = va_arg(lista, char *);
if (cadena)
printf("%s", cadena);
else
printf("(nil)");
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(lista);
}

