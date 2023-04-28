#include "lists.h"

/**
* free_listint - a function for freeing linked lists
* @head: the list head
* Return: void.
*/
void free_listint(listint_t *head)
{
listint_t *p;

while ((p = head) != NULL)
{
head = head->next;
free(p);
}
}
