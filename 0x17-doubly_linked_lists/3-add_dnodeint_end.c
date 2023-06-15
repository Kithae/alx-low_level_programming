#include "lists.h"

/**
 * add_dnodeint_end - a function for adding new end node
 *
 * @head: the list head
 * @n: an element value
 * Return: new element address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *curr;

	curr = malloc(sizeof(dlistint_t));
	if (curr == NULL)
		return (NULL);

	curr->n = n;
	curr->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = curr;
	}
	else
	{
		*head = curr;
	}

	curr->prev = h;

	return (curr);
}
