#include "holberton.h"

/**
 *
 * jack_bauer - - function that print Jack Bauer every minute
 *
 * Return: void
 */

void jack_bauer(void)
{
  int horas, minutos;

  for (horas = 0; horas <= 23; horas++)
    {
      for (minutos = 0; minutos <= 59; minutos++)
	{
	  _putchar((horas / 10) + '0');
	  _putchar((horas % 10) + '0');
	  _putchar(':');
	  _putchar((minutos / 10) + '0');
	  _putchar((minutos % 10) + '0');
	  _putchar('\n');
	}

    }
}
8-24_hours.c
