#include "holberton.h"
/**
 * print_alphabet - Prints "alphabet\n" string
 *
 *
 * Return: void.
 *
 */
void print_alphabet(void)
{
char letra;
for (letra = 'a'; letra <= 'z'; letra++)
{
_putchar(letra);
}
_putchar('\n');
}
