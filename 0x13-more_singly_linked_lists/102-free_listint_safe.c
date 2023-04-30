#include "lists.h"

/**
* free_listp2 - a function for freeing lists
* @head: the list head.
*
* Return: nothing.
*/
void free_listp2(listp_t **head)
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
* free_listint_safe - a function for freeing lists
* @h: the list head.
*
* Return: a size.
*/
size_t free_listint_safe(listint_t **h)
{
size_t nod = 0;
listp_t *headp, *latest, *a;
listint_t *now;

headp = NULL;
while (*h != NULL)
{
latest = malloc(sizeof(listp_t));

if (latest == NULL)
exit(98);

latest->p = (void *)*h;
latest->next = headp;
headp = latest;

a = headp;

while (a->next != NULL)
{
a = a->next;
if (*h == a->p)
{
*h = NULL;
free_listp2(&headp);
return (nod);
}
}

now = *h;
*h = (*h)->next;
free(now);
nod++;
}

*h = NULL;
free_listp2(&headp);
return (nod);
}
Foo
