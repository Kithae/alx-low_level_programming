#include "lists.h"

/**
* delete_nodeint_at_index - a function for deleting index nodes
* @head: the list head.
* @index: an index
*
* Return: 1 else, -1 for failure.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int a;
listint_t *p;
listint_t *n;

p = *head;

if (index != 0)
{
for (a = 0; a < index - 1 && p != NULL; a++)
{
p = p->n;
}
}

if (p == NULL || (p->n == NULL && index != 0))
{
return (-1);
}

n = p->n;

if (index != 0)
{
p->n = n->n;
free(n);
}
else
{
free(p);
*head = n;
}

return (1);
}
