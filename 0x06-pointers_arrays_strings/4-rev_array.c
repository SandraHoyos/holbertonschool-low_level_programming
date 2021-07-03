#include "holberton.h"
/**
 * reverse_array - Reversa un array
 * @a: Arreglo de enteros
 * @n: Arreglo de enteros
 * Return : Vacio
 **/

void reverse_array(int *a, int n)
{
int i = 0, temp;
for (i = 0; i < n; i++)
{
temp = a[n - 1];
a[n - 1] = a[i];
a[i] = temp;
n--;
}
}
