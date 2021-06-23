#include "holberton.h"
/**
 * main - Prints "Holberton\n" string
 *
 *
 * Return: On success 0.
 *
 */
int main(void) {

char cadena[9] = "Holberton\n";

for( int i = 0;i <= 9; i++ )
{
_putchar( cadena[i] );
}  
return (0);
}
