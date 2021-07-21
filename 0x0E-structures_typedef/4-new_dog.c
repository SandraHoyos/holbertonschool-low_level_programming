#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: character pointer
 * @owner: character pointer
 * @age: integer
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i, b, c;
dog_t *perro;

for (i = 0; name[i] != '\0'; i++)
;
a++;
for (j = 0; owner[j] != '\0'; j++)
;
b++;
perro = malloc(sizeof(dog_t));
if (perro == 0)
{
free(perro);
return (NULL);
}
perro->name = malloc(i * sizeof(perro->name));
if (perro->name == 0)
{
free(perro->name);
free(perro);
return (NULL);
}
for (k = 0; k < i; k++)
perro->name[k] = name[k];
perro->name[k] = name[k];
perro->age = age;
perro->owner = malloc(j * sizeof(perro->owner));
if (perro->owner == 0)
{
free(perro->owner);
free(perro->name);
free(perro);
return (NULL);
}
for (k = 0; k < j; k++)
perro->owner[k] = owner[k];
perro->owner[k] = owner[k];
return (perro);
}
