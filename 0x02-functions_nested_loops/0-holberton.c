#include "holberton.h"
/**
 * main - Prints "Holberton\n" string
 *
 *
 * Return: On success 0.
 *
 */
int main(void)
{
int i = 0;
char cadena[] = "Holberton\n";

while (i <= 9)
{
_putchar(cadena[i]);
i++;
}
return (0);
}
