#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -  a function that allocates memory using malloc
 * @b: the bytes to allocate
 *
 * Return: the pointer, else 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
