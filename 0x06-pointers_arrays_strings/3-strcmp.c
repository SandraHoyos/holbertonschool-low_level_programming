#include "holberton.h"

/**
 * _strcmp - compara dos cadenas restando
 * @s1: cadena 1 para comparar
 * @s2: cadena 2 para comparar
 * Return: -15, 15 ,0
 **/

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
i++;
}
if (s1[i] == s2[i])
return (0);
return (s1[i] - s2[i]);
}
