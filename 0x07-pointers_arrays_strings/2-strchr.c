#include "holberton.h"
/**
* _strchr - Retorna un puntero a la primera ocurrencia
*
* @c: Caracter a buscar
* @s: Cadena donde buscar el caracter
*
* Return : pointer or null
*/

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0';i++)
{
if (s[i] == c)
return (s + i);
}
return ('\0');
}
