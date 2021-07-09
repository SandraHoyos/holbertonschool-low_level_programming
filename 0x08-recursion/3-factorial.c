#include "holberton.h"
/**
 * factorial - retorna el factorial de un número
 * @n: numero para calcular el factorial
 * Return: retorna -1 si n =0, 1 si n =0,factorial
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (factorial(n - 1) * n);
}

