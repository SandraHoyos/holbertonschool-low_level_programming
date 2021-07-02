#include "holberton.h"
/**
 * rev_string - function that reverses a string
 *@s: char to evaluate
 *
 * Return void
 */
void rev_string(char *s)
{
int lon, i, j = 0;
char cadena[100];

for (lon = 0; s[lon] != '\0'; lon++)
{
}

for (i = lon -1 ; i >= 0; i--)
{
cadena[j] = s[i];
j++;
}
for (i = 0; i <= lon; i++)
{
s[i] = cadena[i];
putchar(s[i]);
}
}
