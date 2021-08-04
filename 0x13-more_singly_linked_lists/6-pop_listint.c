#include "lists.h"
/**
 *pop_listint - function deletes the head
 *@head:pointer
 *Return: n
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *aux;

if (*head == NULL || head == NULL)
{
return (0);
}

n = (*head)->n;
aux = *head;
*head = (*head)->next;
free(aux);
return (n);
}
