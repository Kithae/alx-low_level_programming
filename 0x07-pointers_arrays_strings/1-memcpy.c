#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a function that fills memory with a constant byte.
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the size of the memory to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;
	char *initial = dest;

	while (x < n)
	{
		*dest++ = *src++;
		x++;
	}
	return (initial);
}
