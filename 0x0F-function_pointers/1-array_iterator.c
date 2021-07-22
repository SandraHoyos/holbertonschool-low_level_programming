#include <stdlib.h>
/**
 * int_index - compara
 *
 * @array: arreglo
 * @size_t: tamaño del arreglo
 * @cmp: puntero a la función
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
}
