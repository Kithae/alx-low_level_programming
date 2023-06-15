#include "lists.h"

/**
 * dlistint_len - a function for returning total list elements
* @h: the list head
 * Return: total nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int tally;

	tally = 0;

	if (h == NULL)
		return (tally);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		tally++;
		h = h->next;
	}

	return (tally);
}
