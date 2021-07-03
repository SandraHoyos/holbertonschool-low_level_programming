#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements in the array a
 * @a: array to print
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
  int i = 0;

  for (i = 0; i < n; i++) 
    {
      printf("%d", a[i]);
      if (i < (n - 1))
	printf(", ");
     
    }
  printf("\n");
}
