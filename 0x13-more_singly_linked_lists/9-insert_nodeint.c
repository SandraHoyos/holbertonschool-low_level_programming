t_index - function to insert a node in a list at given index
* @head: pointer to the pointer to list
* @idx: given index to insert node at
* @n: data to be inserted
* Return: the address of new node inserted or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *old, *temp;
unsigned int i = 1;

if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
old = *head;
temp = (*(head))->next;
while (temp != NULL)
{
if (i == idx)
{
old->next = new;
new->next = temp;
return (new);
}
old = temp;
temp = temp->next;
i++;
}
if (temp == NULL && i == idx)
{
old->next = new;
return (new);
}
free(new);
return (NULL);
}
