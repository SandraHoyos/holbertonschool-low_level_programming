#include "lists.h"

/**
 * free_list - libera listas
 * @head: puntero al inicio de la lista
 * Return: void
 */
void free_list(list_t *head)
{
list_t *libera;
while (head != NULL)
{
libera = head;
head = head->next;
free(libera->str);
free(libera);
}
head = NULL;
}
