#include "lists.h"

/**
 * delete_nodeint_at_index- delete a node at given index
 * @head: pointer to a pointer
 * @index: node to be deleted 
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *old, *tmp;
unsigned int i = 1;
if (*head == NULL)
return (-1);
if (*head != NULL)
{
if (index == 0)
{
tmp = *head;
*head = (*(head))->next;
free(tmp);
return (1);
}
old = *head;
tmp = (*(head))->next;
while (tmp != NULL)
{
if (i == index)
{
old->next = tmp->next;
free(tmp);
return (1);
}
old = tmp;
tmp = tmp->next;
i++;
}
}
return (-1);
}
