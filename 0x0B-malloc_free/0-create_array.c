#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
*  and initializes it with a specific char.
* @size: the array size
 * @c: the char to assign
 * Return: pointer to the array, else NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		s[a] = c;
	return (s);
}
