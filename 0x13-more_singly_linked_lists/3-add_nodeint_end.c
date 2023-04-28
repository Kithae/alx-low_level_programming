#include "lists.h"

/**
* add_nodeint_end - a function for adding end nodes
* @head: the list head.
* @n: a list element.
*
* Return: an address else, NULL.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *curr;
listint_t *p;

(void)p;

curr = malloc(sizeof(listint_t));

if (curr == NULL)
return (NULL);

curr->n = n;
curr->next = NULL;
p = *head;
if (*head == NULL)
{
*head = curr;
}
else
{
while (p->next != NULL)
{
p = p->next;
}
p->next = curr;
}

return (*head);
}
