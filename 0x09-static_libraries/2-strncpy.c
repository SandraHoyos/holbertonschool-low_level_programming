#include "holberton.h"
/**
 * _strncpy - copia un string
 * @src: strint origen
 * @dest: string de destino
 * @n: n bites desde el src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, k;

i = 0;
while (src[i] != '\0')
i++;
for (k = 0; k < n; k++)
{
if (k < i)
dest[k] = src[k];
else if (k >= i)
dest[k] = 0;
}
return (dest);
}
