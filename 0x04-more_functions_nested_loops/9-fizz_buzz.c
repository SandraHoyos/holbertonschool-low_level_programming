#include <stdio.h>
#include "holberton.h"
/**
 * main - Programa that prints the numbers from 1 to 100
 *
 * @size: length of square
 *
 * Return: void
 */



int main(void)
{
  int i;
for(i = 0; i < 100; i++)
    {
      if(i%3 == 0 && i%5 == 0)
	{
	  printf("FizzBuzz ");
	}
      else if (i%5 == 0)
	{
	  printf("Buzz ");
	}
      else if (i%3 == 0)
	{
	  printf("Fizz ");
	}
      else if (i== 0)
	{
	  printf("\n");
	}
      else
	{
	  printf("%i ", i);
	}
    }
  printf("\n");
  return 0;
}
