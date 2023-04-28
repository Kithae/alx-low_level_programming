#include "lists.h"

/**
* sum_listint - a function for summing a linked list data
* @head: the list head.
*
* Return: a sum.
*/
int sum_listint(listint_t *head)
{
int tally;

tally = 0;
while (head != NULL)
{
tally += head->n;
head = head->next;
}

return (tally);
}

