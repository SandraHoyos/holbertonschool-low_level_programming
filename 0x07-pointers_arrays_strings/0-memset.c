#include "holberton.h"
/**
 * _memset - function tha fills memory with a constant byte
 * @s: pointed
 * @b: constante byte
 * @n:numero de bytes para apuntar de la memoria
 *
 * Return: pointed s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
s[i] = b;

return (s);
}
