#include "lists.h"

/**
 * free_dlistint - a function for freeing a list
 *
 * @head: the list head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempo;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tempo = head) != NULL)
	{
		head = head->next;
		free(tempo);
	}
}
