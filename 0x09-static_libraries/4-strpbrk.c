#include "holberton.h"
/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: cadena de origen
 * @accept: caracteres en accept
 *
 * Return: retorna un puntero al byte en s
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j;

while (s[i])
{
j = 0;
while (accept[j])
{
if (s[i] == accept[j])
{
s += i;
return (s);
}
j++;
}
i++;
}
return ('\0');
}
