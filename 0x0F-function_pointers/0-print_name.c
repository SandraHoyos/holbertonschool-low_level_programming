#include <stdio.h>
#inclide "function_pointers.h"

/**
 * print_name_as_is - prints a name 
 * @name: name of the person 
 * @f: pointer to function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
 
return;
}
