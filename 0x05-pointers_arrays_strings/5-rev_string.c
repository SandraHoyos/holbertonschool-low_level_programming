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
char c;

for (lon = 0; s[lon] != '\0'; lon++)
{
}
for (i = lon; i >= 0; i--)
{
c = s[i];
s[i] = s[j];
s[j] = c;
j++;
}

}
