#include "lists.h"

/**
* free_listp - a function for freeing lists
* @head: the list head.
*
* Return: nothing.
*/
void free_listp(listp_t **head)
{
listp_t *p;
listp_t *now;

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

/**
* print_listint_safe - a function for printing lists
* @head: the list head.
*
* Return: total nodes.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t nod = 0;
listp_t *headp, *latest, *a;

headp = NULL;
while (head != NULL)
{
latest = malloc(sizeof(listp_t));

if (latest == NULL)
exit(98);

latest->p = (void *)head;
latest->next = headp;
headp = latest;

a = headp;

while (a->next != NULL)
{
a = a->next;
if (head == a->p)
{
printf("-> [%p] %d\n", (void *)head, head->n);
free_listp(&headp);
return (nod);
}
}

printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
nod++;
}

free_listp(&headp);
return (nod);
}
