#include "holberton.h"
/**
 * _pow_recursion - calcula el valor de x elevado a la y
 * @x: Entero para calcular la potencia
 * @y: Entero a elevar x
 * Return: x * x a la potencia y-1;
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (_pow_recursion(x, y - 1) * x);
}
