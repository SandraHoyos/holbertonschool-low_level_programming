#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - busca la aguja en el pajar
 * @haystack: cadena donde buscar
 * @needle: cadena que buscar
 *
 * Return: puntero al inicio de la subcadena
 */
char *_strstr(char *haystack, char *needle)
{
int i;

if (*needle == 0)
return (haystack);

while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
return (haystack);

i++;

} while (haystack[i] == needle[i]);
}
haystack++;
}

return ('\0');
}
