#include "holberton.h"

/**
 * sqrt_prueba - Evalua de 1 -n
 * @a: mismo numero que n
 * @b: numero que itera de 1 a n
 *
 * Return: exitoso 1.
 * Error, retorna -1.
 */
int sqrt_prueba(int a, int b)
{
if (b * b == a)
return (b);
else if (b * b > a)
return (-1);
return (sqrt_prueba(a, b + 1));
}
/**
 * _sqrt_recursion - retorna la raiz cuadrada de n
 * @n: Número entero
 *
 * Return: Exitoso 1.
 * Error, retorna -1
 */
int _sqrt_recursion(int n)
{
return (sqrt_prueba(n, 1));
}
