#include "lists.h"

/**
 * add_node_end - adiciona nuevo nodo al final de list_t
 * @head: puntero al puntero del inicio de list_t
 * @str: Cadena a adicionar
 * Return: Nuevo nodo
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *adicionar, *actual;
int i;
if (head == NULL)
return (NULL);
adicionar = malloc(sizeof(list_t));
if (adicionar == NULL)
return (NULL);
if (*head == NULL)
*head = adicionar;
else
{
actual = *head;
while (actual->next != NULL)
actual = actual->next;
actual->next = adicionar;
}
adicionar->next = NULL;
adicionar->str = strdup(str);
for (i = 0; str[i] != '\0'; i++)
;
adicionar->len = i;
return (adicionar);
}
