#include <stdlib.h>
#include "main.h"

/**
 * count_word – a helper function for counting the total words
 * @s: the string reference
 *
 * Return: the number of words
 */
int count_word(char *s)
{
	int flag, f, g;

	flag = 0;
	g = 0;

	for (f = 0; s[f] != '\0'; f++)
	{
		if (s[f] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			g++;
		}
	}

	return (g);
}
/**
 * **strtow - a function that splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings, else NULL
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, b = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	matrix[b] = NULL;

	return (matrix);
}
