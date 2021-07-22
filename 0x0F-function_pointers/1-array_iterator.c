#include <stdlib.h>
/**
 * array_iterator - recorre arreglo
 *
 * @array: arreglo
 * @size: tamaño del arreglo
 * @action: puntero
 *
 * Return: retur -1 on error or i on success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
