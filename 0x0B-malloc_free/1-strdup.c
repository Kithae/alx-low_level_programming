#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
 * @str: char
 * Return:  pointer to the duplicated string, else NULL for insufficient memory
 */
char *_strdup(char *str)
{
	char *y;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	y = malloc(sizeof(char) * (a + 1));

	if (y == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		y[b] = str[b];

	return (y);
}
