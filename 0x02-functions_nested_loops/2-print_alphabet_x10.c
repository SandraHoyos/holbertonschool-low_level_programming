#include "holberton.h"
/**
 * print_alphabet_x10 - Prints "alphabet\n" string
 *
 *
 * Return: void.
 *
 */
void print_alphabet_x10(void)
{
char letra;
int i;
for(i=0; i<10; i++)
{
for (letra = 'a'; letra <= 'z'; letra++)
{
_putchar(letra);
}
_putchar('\n');
}
}
