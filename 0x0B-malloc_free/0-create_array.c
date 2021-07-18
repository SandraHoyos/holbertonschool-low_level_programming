#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create an array of chars
 *@size: size of array
 *@c: character to assing
 *Return: pointer to Array, NULL if value is 0
*/
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int a;

if (size == 0)
return (NULL);
s = malloc(size * sizeof(*s));
if (s == NULL)
return (NULL);
for (a = 0; a < size; a++)
{
s[a] = c;
}
return (s);
}
