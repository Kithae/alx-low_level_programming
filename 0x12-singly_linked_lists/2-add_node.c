#include "lists.h"
#include <stdlib.h>

/**
* add_node - a function that inserts new nodes infront of the list
* @head: a linked list head.
* @str: a string.
* Return: an address else, NULL.
*/

list_t *add_node(list_t **head, const char *str)
{
int tally = 0;
	list_t *pt;

	pt = malloc(sizeof(list_t));
	if (pt == NULL)
		return (NULL);
	pt->str = _sp(str);
	while (str[tally] != '\0')
		tally++;
	pt->len = tally;
	pt->next = *head;
	*head = pt;
	return (pt);
}

/**
 * _sp - another memory allocation function
 * @str: a string
 *
* Return: a pointer
 */
char *_sp(const char *str)
{
	int x, y;
	char *p;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (*(str + x) != '\0')
	{
		x++;
	}

	p = malloc(sizeof(char) * x + 1);

	if (p == NULL)
		return (NULL);

	y = 0;
	while (str[y] != '\0')
	{
		p[y] = str[y];
		y++;
	}
	p[y] = '\0';
	return (p);
}
