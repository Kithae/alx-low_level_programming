#include "lists.h"

/**
* add_nodeint - a function for adding start nodes
* @head: the list head
* @n: a list element.
*
* Return: an address else, NULL.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *start;

start = malloc(sizeof(listint_t));

if (start == NULL)
return (NULL);

start->n = n;
start->next = *head;
*head = start;

return (*head);
}
