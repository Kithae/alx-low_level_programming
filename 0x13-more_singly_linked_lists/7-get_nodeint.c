#include "lists.h"

/**
* get_nodeint_at_index - a function for printing the nth node
* @head: the list head.
* @index: node index.
*
* Return: nth node, else NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a;

for (a = 0; a < index && head != NULL; a++)
{
head = head->next;
}

return (head);
}
