#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: int pointer
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (n == 0)
		return (-1);
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	bit = 1;
	bit = bit << index;
	*n = *n | bit;
	return (1);
}
