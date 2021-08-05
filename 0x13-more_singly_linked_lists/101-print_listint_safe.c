#include "lists.h"

/**
 * print_listint_safe - print list with a loop
 * @head: pointer to the list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *nuevo, *comp;
size_t count_nuevo = 0, count_comp = 0;

nuevo = head;
comp = head;
while (nuevo != NULL)
{
while (count_nuevo > count_comp)
{
if (nuevo == comp)
{
printf("-> [%p] %d\n", (void *)nuevo, nuevo->n);
return (count_nuevo);
}
count_comp++;
comp = comp->next;
}
comp = head;
count_comp = 0;
printf("[%p] %d\n", (void *)nuevo, nuevo->n);
count_nuevo++;
nuevo = nuevo->next;
}
return (count_nuevo);
}
