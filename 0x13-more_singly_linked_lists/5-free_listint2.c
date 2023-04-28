#include "lists.h"

/**
* free_listint2 - a function for freeing linked lists
* @head: the list head.
*
* Return: void.
*/
void free_listint2(listint_t **head)
{
listint_t *p;
listint_t *now;

if (head != NULL)
{
now = *head;
while ((p = now) != NULL)
{
now = now->next;
free(p);
}
*head = NULL;
}
}
