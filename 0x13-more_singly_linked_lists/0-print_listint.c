#include "lists.h"

/**
* print_listint - a function for printing list elements
* @h: the list head.
*
* Return: total nodes.
*/
size_t print_listint(const listint_t *h)
{
size_t nod = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nod++;
}
return (nod);
}
