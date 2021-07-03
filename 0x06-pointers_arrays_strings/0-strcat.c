#include "holberton.h"
/**
 *_strcat - concatena dos cadenas
 *@src: Cadena origen
 *@dest: Cadena para sobre escribir
 *Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
i++;

for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = src[j];
return (dest);
}
