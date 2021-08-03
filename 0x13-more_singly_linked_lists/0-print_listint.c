#include "lists.h"
/**
 *print_listint - function that prints
 *@h: pointer to the beginning of the list
 *Return: i
 */
size_t print_listint(const listint_t *h)
{
size_t i=0;
while (h != NULL)
{
printf("%d\n",h->n);
i++;
h=h->next;
return(i);
}
