#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: string of arguments in array
 * Return: 0
 */

int main(int argc, char *argv[])
{
int aux;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

aux = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", aux);

return (0);
}
