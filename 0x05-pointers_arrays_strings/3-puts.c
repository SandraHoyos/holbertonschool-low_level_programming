#include "holberton.h"
/**
 *
 * _puts - funcion that prints a string
 * @str: value to be evalued
 *
 *
 */

void _puts(char *str)
{
int a; 
for(a=0; str[a]!= '\0'; ++a)
{
putchar(str [a]);
}
putchar ('\n');
}
