#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - crea una estructura de tipo perro
 * @name: Nombre
 * @age: Edad
 * @owner: Dueño
 * Return: puntero al buffer de datatype dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int namelen = 0, ownerlen = 0, i = 0;
dog_t *perro;

while (name[namelen++])
;
while (owner[ownerlen++])
;
perro = malloc(sizeof(dog_t));
if (doggy == NULL)
return (NULL);

perro->name = malloc(namelen * sizeof(perro->name));
if (perro == NULL)
return (NULL);
for (i = 0; i < namelen; i++)
perro->name[i] = name[i];

perro->age = age;

perro->owner = malloc(olen * sizeof(perro->owner));
if (perro == NULL)
return (NULL);
for (i = 0; i < ownerlen; i++)
doggy->owner[i] = owner[i];
return (doggy);
}
