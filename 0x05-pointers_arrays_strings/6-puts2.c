#include "holberton.h"
/**
 * puts2 - Prints out every other char of the string.
 * @str: input string to print.
 */
void puts2(char *str)
{
int i=0;

while (str[i] != '\0')
{
if (i % 2 == 0)
putchar(str[i]);
i++;
}
putchar('\n');
}
