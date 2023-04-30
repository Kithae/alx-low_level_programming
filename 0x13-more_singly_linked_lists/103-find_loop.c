#include "lists.h"

/**
* find_listint_loop - a function for finding loops.
* @head: the list head.
*
* Return: an adress.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *a;
listint_t *last;

a = head;
last = head;
while (head && a && a->next)
{
head = head->next;
a = a->next->next;

if (head == a)
{
head = last;
last =  a;
while (1)
{
a = last;
while (a->next != head && a->next != last)
{
a = a->next;
}
if (a->next == head)
break;

head = head->next;
}
return (a->next);
}
}

return (NULL);
}
