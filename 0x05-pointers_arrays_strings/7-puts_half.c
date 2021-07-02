#include "holberton.h"
/**
 * puts2 - Prints out every other char of the string.
 * @str: input string to print.
 */
void puts2(char *str)
{
int i = 0, mitad = 0, j = 0;

while (str[i] != '\0')
i++;
mitad = (i - 1) / 2;

for (j = mitad; j <= i; j++)
putchar(str[j]);
}
