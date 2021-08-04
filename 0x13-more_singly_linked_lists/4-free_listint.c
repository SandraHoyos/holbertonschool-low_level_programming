#include "lists.h"
/**
 *free_listint - function  frees a listint_t list.
 *@head:pointer
 *Return: 0
 */
void free_listint(listint_t *head)
{
listint_t *aux;
while (head)
{
aux = head->next;
free(head);
head = aux;
}
}
