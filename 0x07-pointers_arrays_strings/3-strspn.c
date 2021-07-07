#include "holberton.h"
/**
* _strspn - obtiene la longitud de una subcadena
* @s: Segmento para comparar
* @accept: cadena a comparar
* Return: numero de bytes de accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
I = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0' && s[i] != accept[j])
j++;
if (accept[j] == '\0')
return (i);
i++;
}
return (i);
}
