#include <stdio.h>
#include "holberton.h"
/**
 * main - Imprime los argumentos que recibe
 * @argc: número de argumentos
 * @argv: arreglo de argumentos
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
