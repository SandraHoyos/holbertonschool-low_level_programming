
#include "holberton.h"
/**
 * _sign - funcion that prints of a number
 * @n:caracter to check
 *
 *
 * Return: 1 ,0 or -1
 *
 */
int print_sign(int n)
{
if ( n < 0)
{
_putchar('-');
 
 return(-1);
 }
else if (n == 0);
 {
   _putchar('0');
return(0);
 }
if ( n > 0);
 {
   _putchar('+');
  return(1);
}
}
