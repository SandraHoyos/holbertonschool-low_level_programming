#include "holberton.h"
/**
 * _strlen_recursion - retotna la longitud de una cadena
 * @s: parametro cadena para revisar
 *
 * Return: largo de la cadena
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
