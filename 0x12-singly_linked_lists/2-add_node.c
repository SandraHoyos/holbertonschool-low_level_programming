#include "lists.h"

/**
 * add_node -  función que añade un nodo al inicio de list_t
 * @head: puntero al puntero list_t
 * @str: puntero al string para copiar el nodo
 * Return: dirección del elemento o NULL
 */
list_t *add_node(list_t **head, const char *str)
{
  list_t *add;
  int a;

add = malloc(sizeof(list_t));
if (add == NULL)
return (NULL);
for (a = 0; str[a] != '\0'; a++)
;
add->str = strdup(str);
if (add->str == NULL)
{
free(add);
return (NULL);
}
add->len = a;
add->next = *head;
*head = add;
return (*head);
}
