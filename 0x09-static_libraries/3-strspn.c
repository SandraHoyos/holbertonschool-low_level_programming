#include "holberton.h"
/**
 * _strspn - obtiene la longitud de una subcadena
 * @s: Segmento para comparar
 * @accept: cadena a comparar
 * Return: numero de bytes de accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j, k = 0;

while (accept[i])
{
j = 0;
while (s[j] != 32)
{
if (accept[i] == s[j])
{
k++;
}
j++;
}
i++;
}
return (k);
}
