#include "lists.h"

/**
 * list_len - función que calcúla la longitud de la lista
 * @h: puntero al inicio de la lista
 * Return: Número de elementos de la lista
 */
size_t list_len(const list_t *h)
{
size_t contador = 0;

while (h != NULL)
{
contador++;
h = h->next;
}
return (contador);
}
