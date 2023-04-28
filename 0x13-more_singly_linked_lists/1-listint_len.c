#include "lists.h"

/**
* listint_len - a function for printing linked list elements
* @h: the list head.
*
* Return: total nodes.
*/
size_t listint_len(const listint_t *h)
{
size_t nod = 0;

while (h != NULL)
{
h = h->next;
nod++;
}
return (nod);
}
