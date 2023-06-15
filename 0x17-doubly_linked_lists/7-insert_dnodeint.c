#include "lists.h"

/**
 * insert_dnodeint_at_index - a function for inserting new node
 * at specific position
*
 * @h: the list head
 * @idx: new node index
 * @n: an element value
 * Return: an address else, NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr;
	dlistint_t *head;
	unsigned int a;

	curr = NULL;
	if (idx == 0)
		curr = add_dnodeint(h, n);
	else
	{
		head = *h;
		a = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (a == idx)
			{
				if (head->next == NULL)
					curr = add_dnodeint_end(h, n);
				else
				{
					curr = malloc(sizeof(dlistint_t));
					if (curr != NULL)
					{
						curr->n = n;
						curr->next = head->next;
						curr->prev = head;
						head->next->prev = curr;
						head->next = curr;
					}
				}
				break;
			}
			head = head->next;
			a++;
		}
	}

	return (curr);
}
