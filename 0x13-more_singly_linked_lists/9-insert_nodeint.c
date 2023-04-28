#include "lists.h"

/**
* insert_nodeint_at_index - a function for inserting nodes
* at specified positions.
* @head: the list head.
* @idx: an index
* @n: an element integer.
*
* Return: an address else, NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int a;
listint_t *now;
listint_t *p;

p = *head;

if (idx != 0)
{
for (a = 0; a < idx - 1 && p != NULL; a++)
{
p = p->next;
}
}

if (p == NULL && idx != 0)
return (NULL);

now = malloc(sizeof(listint_t));
if (now == NULL)
return (NULL);

now->n = n;

if (idx == 0)
{
now->next = *head;
*head = now;
}
else
{
now->next = p->next;
p->next = now;
}

return (now);
}
