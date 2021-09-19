#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node 
 * @head: double pointer to the beginning 
 * @n: value to add 
 *
 * Return: pointer to the new node, 
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *end = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head != NULL)
	{
		while (end->next != NULL)
		{
			end = end->next;
		}
	end->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = end;

	return (*head);
}
