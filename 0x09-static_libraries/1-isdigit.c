#include "holberton.h"
/**
 * _isdigit - checks for characters that are digits
 * @caracter: variable caracter para revisar si es digito
 *
 * Return: 0 or 1
 */
int _isdigit(int caracter)
{
if (caracter >= '0' && caracter <= '9')
return (1);
else
return (0);
}
