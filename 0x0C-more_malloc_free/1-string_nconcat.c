#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: the appended string
 * @s2: the concatenated string
 * @n: the bytes to concatenate
 *
 * Return: a pointer, else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *y;
	unsigned int a = 0, b = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		y = malloc(sizeof(char) * (l1 + n + 1));
	else
		y = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!y)
		return (NULL);

	while (a < l1)
	{
		y[a] = s1[a];
		a++;
	}

	while (n < l2 && a < (l1 + n))
		y[a++] = s2[b++];

	while (n >= l2 && a < (l1 + l2))
		y[a++] = s2[b++];

	y[a] = '\0';

	return (y);
}
