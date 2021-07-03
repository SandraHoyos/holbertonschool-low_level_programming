#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - Modo titulo
 * @s: string a cambiar
 * Return: int
 */
char *cap_string(char *s)
{
int i, j, k;

i = 0;
while (s[i] != '\0')
i++;
if ((s[0] >= 97) && (s[0] <= 122))
s[0] = s[0] - 32;
for (j = 1; j < i; j++)
{
k = j - 1;
if (s[k] == 9 || s[k] == 10 || (s[k] > 31 && s[k] < 35)
|| s[k] == '(' || s[k] == ')' || s[k] == ',' || s[k] == '.'
|| s[k] == ';' || s[k] == '?' || s[k] == '{' || s[k] == '}')
if ((s[j] > 96) && (s[j] < 123))
s[j] = s[j] - 32;
}
return (s);
}
