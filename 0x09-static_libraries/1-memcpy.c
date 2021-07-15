#include "holberton.h"
/**
 * _memcpy - copia un area de memoria
 * @dest: puntero al area de destino
 * @src: puntero al area de origen
 * @n: número de bytes a copiar
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
