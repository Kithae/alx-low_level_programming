#include "lists.h"

/**
* reverse_listint - a function for reversing lists
* @head: the list head of a list.
*
* Return: a pointer.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *a;
listint_t *b;

a = NULL;
b = NULL;

while (*head != NULL)
{
b = (*head)->next;
(*head)->next = a;
a = *head;
*head = b;
}

*head = a;
return (*head);
}
