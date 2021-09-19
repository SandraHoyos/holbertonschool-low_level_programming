#include "lists.h"

/**
 * sum_dlistint - sums all of the data 
 * @head: pointer to the beginning
 *
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
