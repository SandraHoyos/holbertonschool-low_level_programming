#include <stdlib.h>
#include <stdio.h>
#include <search_algos.h>

/**
* linear_search - earches for a value in an array
* @size: valuen in size_t with size
* @array: list with numbers
* @value: value a search
*
* Return: index of search or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

