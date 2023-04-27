#include "lists.h"

/**
* free_list - a function for freeing lists
* @head: a linked list head.
* Return: 0.
*/

void free_list(list_t *head)
{
list_t *now;

while ((now = head) != NULL)
{
head = head->next;
free(now->str);
free(now);
}
}
