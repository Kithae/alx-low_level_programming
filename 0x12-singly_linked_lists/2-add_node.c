#include "lists.h"
/**
* add_node - a function that inserts new nodes infront of the list
* @head: a linked list head.
* @str: a string.
* Return: an address else, NULL.
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *curr;
size_t x;

new = malloc(sizeof(list_t));
if (curr == NULL)
return (NULL);

curr->str = strdup(str);

for (x = 0; str[x]; x++)
;

curr->len = x;
curr->next = *head;
*head = curr;

return (*head);
}
