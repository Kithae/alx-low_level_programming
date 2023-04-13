#include <stdlib.h>
#include "main.h"

/**
 * *_memset - gives memory a constant byte
 * @s: the memory space
 * @b: the char to copy
 * @n: the number to copy char b
 *
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc -  a function that allocates memory for an array, using malloc
 * @nmemb: the array elements
 * @size: the size of every element
 *
 * Return: a pointer, else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
