#include "holberton.h"
#include <stdio.h>
/**
 * main - Programa that prints the numbers from 1 to 100
 *
 * @size: length of square
 *
 * Return: void
 */



int main(void) {

  for (int i=1; i<=100; i++)
    {
      if(i%3==0 && i%5==0)
	{
	  printf("FizzBuzz ");
	}
      else if (i%5==0)
	{
	  printf("Buzz ");
	}
      else if (i%3==0)
	{
	  printf("Fizz ");
	}
      else
	{
	  printf("%i ",i);
	}
    }
  printf("/n");
  return 0;
}
