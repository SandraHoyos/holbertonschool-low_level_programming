#include "holberton.h"
/**
 * puts_half - prints half od string
 * @str: input string to print.
 */
void puts_half(char *str)
{
int i = 0, mitad = 0, j = 0;

while (str[i] != '\0')
i++;
if (i % 2 == 0)
mitad = (i - 1) / 2;
else
mitad = (i - 1) / 2;
for (j = mitad; j <= i; j++)
{
putchar(str[j]);
}
putchar('\n');
}
