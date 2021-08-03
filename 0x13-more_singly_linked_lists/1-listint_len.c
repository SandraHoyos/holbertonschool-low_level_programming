#include "lists.h"
/**
 *listint_len - number of elements in a linked
 *@h: pointer to the beginning of the list
 *Return: j
 */
size_t listint_len(const listint_t *h)
{
size_t j = 0;
while (h != NULL)
{
j++;
h = h->next;
}
return (j);
}
