#include "lists.h"
/**
* list_len - a function that prints total list elements
* @h: a singly linked list.
* Return: total linked list elements.
*/

size_t list_len(const list_t *h)
{
size_t element;

element = 0;
while (h != NULL)
{
h = h->next;
element++;
}
return (element);
}
