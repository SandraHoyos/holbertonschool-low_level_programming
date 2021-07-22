#include <stdio.h>
#inclide "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
