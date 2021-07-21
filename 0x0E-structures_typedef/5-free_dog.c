#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - funci[on libera perros
 * @d: puntero
 * Return: nada
 */
void free_dog(dog_t *d)
{
if (d != 0)
{
free(d->name);
free(d->owner);
free(d);
}
}
