#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the pointer
 * @b: the constant byte
 * @n: the size of the memory to fill
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x = 0;
	char *initial = s;

	while (x < n)
	{
		*s++ = b;
		x++;
	}
	return (initial);
}
