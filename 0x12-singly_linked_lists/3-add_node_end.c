#include "lists.h"

/**
* add_node_end - a function that adds new end nodes in the list
* @head: the linked list head.
* @str: a string.
* Return: an address else, NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *curr, *pr;
size_t x;

curr = malloc(sizeof(list_t));
if (curr == NULL)
return (NULL);

curr->str = strdup(str);

for (x = 0; str[x]; x++)
;

curr->len = x;
curr->next = NULL;
pr = *head;

if (pr == NULL)
{
*head = curr;
}
else
{
while (pr->next != NULL)
pr = pr->next;
pr->next = curr;
}

return (*head);
}
