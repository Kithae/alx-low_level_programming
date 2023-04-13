#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - a function that reallocates a memory block
* using malloc and free
 * @ptr: a pointer to previous memory
 * @old_size: old allocated size
 * @new_size: new size to be allocated
*
 * Return: a pointer, else NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *p_old;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	p_old = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			p1[a] = p_old[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			p1[a] = p_old[a];
	}

	free(ptr);
	return (p1);
}
