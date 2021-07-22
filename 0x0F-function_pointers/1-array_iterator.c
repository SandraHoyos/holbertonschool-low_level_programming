#include <stdlib.h>
/**
 * int_index - compara
 *
 * @array: arreglo
 * @size: tamaño del arreglo
 * @cmp: puntero a la función
 *
 * Return: retur -1 on error or i on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
if (size <= 0)
return (-1);

i = 0;
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
}
return (-1);
}
