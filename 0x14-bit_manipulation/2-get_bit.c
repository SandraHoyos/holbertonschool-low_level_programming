#include "main.h"

/**
 * get_bit - function that returns the value of a bit at given index
 * @n: number to check the bit in
 * @index: index starting form 0
 * Return: index or on error -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	n = n >> index;
	return (n & 1);
}
