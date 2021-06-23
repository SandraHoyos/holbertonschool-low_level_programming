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
  char c="";
  char cadena[10]="Holberton\n";
  for(i=0;i<=10;i++)
    {
      c=cadena[i];
      _putchar(c);
    }
  return (0);
}
