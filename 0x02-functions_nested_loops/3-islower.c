#include "holberton.h"
/**
 * _islower - check for lowercase letters
 * @c:caracter to check
 *
 *
 * Return: 0 or 1
 *
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
