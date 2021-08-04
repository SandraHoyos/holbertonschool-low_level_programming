#include "lists.h"
/**
 *
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *End_nodo;
listint_t *h = *head;
if (head == NULL)
{
return (NULL);
}
End_nodo = malloc(sizeof(listint_t));
if (End_nodo == NULL)
{
return (NULL);
}
End_nodo->n = n;
End_nodo->next = NULL;
if (*head == NULL)
{
*head = End_nodo;
return (End_nodo);
}
while (h->next != NULL)
{
h = h->next;
}
h->next = End_nodo;
return (h);
}
