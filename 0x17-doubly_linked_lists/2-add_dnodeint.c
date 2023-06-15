#include "lists.h"

/**
 * add_dnodeint - a function for adding new nodes
*
 * @head: the list head
 * @n: an element value
 * Return: new element adress
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curr;
	dlistint_t *h;

	curr = malloc(sizeof(dlistint_t));
	if (curr == NULL)
		return (NULL);

	curr->n = n;
	curr->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	curr->next = h;

	if (h != NULL)
		h->prev = curr;

	*head = curr;

	return (curr);
}
