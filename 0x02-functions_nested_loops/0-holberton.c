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
  char cadena[10]="Holberton\n";
  for(i=0;i<=10;i++)
    {
      _putchar(cadena[i]);
    }
  return (0);
}
