#include "function_pointers.h"

/**
* int_index -  a function that searches for an integer
* @array: an array
* @size: the total elements size of elements
* @cmp: a pointer
* Return: 0, else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		return (a);
	}
	return (-1);
}
