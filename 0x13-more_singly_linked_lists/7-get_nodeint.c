#include "lists.h"
/**
 *pop_listint - function that returns the nth node
 *@head: pointer
 *Return:n
 */
#include "lists.h"

int pop_listint(listint_t **head)
{
pop_listintint n;
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
