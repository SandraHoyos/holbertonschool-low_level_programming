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
int i, j, k;

i = 0, j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
j++;
if (n < j)
j = n - 1;
for (k = 0; k <= j; k++, i++)
dest[i] = src[k];
dest[i + 1] = '\0';
return (dest);
}
