#include "dog.h"
#include <stdio.h>
/**
 * print_dog - imprime el contenido de perro
 * @d estructura perro
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
printf("Name: %s\n", d->name);
else
printf("Name:(nil)\n");
printf("Age: %.6f\n", d->age);
d->owner != NULL ? printf("(nil)\n") : printf("%s\n", d->owner) 
}
}
