#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: the string
 * @c: the character
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
int x = 0;

	while (*(s + x))
	{
		if (*(s + x) == c)
			return (s + x);
		x++;
	}
	if (*(s + x) == c)
		return (s + x);
	return (NULL);
}
