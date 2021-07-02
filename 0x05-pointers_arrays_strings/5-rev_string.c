#include "holberton.h"
/**
 * rev_string - function that reverses a string
 *@s: char to evaluate
 *
 * Return void
 */
void rev_string(char *s)
{
int i = 0, j = 0;
char c[500];

while (s[i] != '\0')
{
c[i] = s[i];
i++;
}
i--;
while (i >= 0)
{
s[i] = c[j];
i--;
j++;
}
s[j++] = '\0';
}
