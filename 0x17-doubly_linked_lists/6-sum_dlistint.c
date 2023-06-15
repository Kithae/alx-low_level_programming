#include "lists.h"

/**
 * sum_dlistint - a function for returning sums
*
 * @head: the list head
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int tally;

	tally = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			tally += head->n;
			head = head->next;
		}
	}

	return (tally);
}
