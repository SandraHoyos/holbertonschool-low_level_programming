#include "holberton.h"

/**
 * _strncat - concatena
 * @src: cadena desde donde se copia
 * @dest: la cadena de destino
 * @n: numero a concatenar
 *
 * Return: dest
 **/

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;

while (dest[i] != '\0')
i++;
for (j = 0; j < n; j++)
{
dest[i] = src[j];
i++;
}
if (dest[i - 1] != '\0')
dest[i] = '\0';
return (dest);
}
