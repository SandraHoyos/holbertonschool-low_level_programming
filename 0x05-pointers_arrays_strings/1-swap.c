#include "holberton.h"
/**
 * swap_int - funtion that values of two integers
 *
 * @a: variables to exchange
 * @b: variables to exchange
 * 
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
