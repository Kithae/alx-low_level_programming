#include "lists.h"

/**
* pop_listint - a function for deleting head nodes
* @head: the list head.
*
* Return: info.
*/
int pop_listint(listint_t **head)
{
int headnod;
listint_t *x;
listint_t *now;

if (*head == NULL)
return (0);

now = *head;

headnod = now->n;

x = now->next;

free(now);

*head = x;

return (headnod);
}
