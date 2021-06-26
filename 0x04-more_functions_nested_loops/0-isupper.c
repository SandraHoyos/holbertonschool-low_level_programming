#include "holberton.h"

/**
 * _isupper - Its a function that checks for uppercase letters
 * @caracter: character to check
 *
 * Return: 0 if caracter is lowercase or 1 if caracter is uppercase
 */


int _isupper(int caracter)
{
if (caracter >= 'A' && caracter <= 'Z')
return (1);
else
return (0);
}
