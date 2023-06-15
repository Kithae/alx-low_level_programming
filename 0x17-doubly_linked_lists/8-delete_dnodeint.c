#include "lists.h"

/**
 * delete_dnodeint_at_index - a function for deleting index nodes
*
 * @head: the list head
 * @index: index of the new node
 * Return: 1 else, -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *x;
	dlistint_t *y;
	unsigned int a;

	x = *head;

	if (x != NULL)
		while (x->prev != NULL)
			x = x->prev;

	a = 0;

	while (x != NULL)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = x->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				y->next = x->next;

				if (x->next != NULL)
					x->next->prev = y;
			}

			free(x);
			return (1);
		}
		y = x;
		x = x->next;
		a++;
	}

	return (-1);
}
