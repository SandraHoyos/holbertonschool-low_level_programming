#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function to return pointer containing copy of string
 * @str: string to be copied
 *
 * Return: Null for failure or pointer.
 */
char *_strdup(char *str)
{
char *s;
int i, j;
if (str == 0)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
i++;
s = malloc((i) * (sizeof(*s)));
if (s == 0)
return (NULL);
for (j = 0; j < i; j++)
s[j] = str[j];
return (s);
}
