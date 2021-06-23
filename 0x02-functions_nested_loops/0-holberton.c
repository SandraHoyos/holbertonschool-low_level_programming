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
  int i=0;
  char c;
  char cadena[10]="Holberton\n";
  while (i<=9)
    {
      c=cadena[i];
      _putchar(c);
      i++;
    }
  return (0);
}
