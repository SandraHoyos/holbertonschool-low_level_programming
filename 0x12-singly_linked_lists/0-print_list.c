#include "lists.h"
/**
 * print_list - print list
 * @h: pointer to the beginning of the list
 * Return: Contador
 */
size_t print_list(const list_t *h)
{
size_t contador = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
contador++;
}
return (contador);
}
