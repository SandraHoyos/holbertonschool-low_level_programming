#include "main.h"

/*imprimir la representacion binaria de un numero en 1 y 0
no se pueden usar arreglos
no se puede usar malloc
no se puede hacer % o / */

void print_binary(unsigned long int n)
{
/*Agregar condicionales, siempre! */
/*Si el numero que recibo es 0 pues imprimo un cero
no pongo saltos de linea porque estan incluidos en el main y return para terminar la funcion*/

if (n > 1)
{
print_binary(n >> 1);
}
_putchar((n & 1) + '0');
}
/*
step 1: Check n > 0
step 2: Right shift the number by 1 bit and recursive function call
step 3: Print the bits of number
*/
/*void recursion(unsigned long int n)
{
if (n == 0)
{
return;
}
else
{
recursion(n >> 1);
_putchar((n & 1) + '0');
}
}
*/

/*
0
1
1100010
10000000000
10000000001
*/
