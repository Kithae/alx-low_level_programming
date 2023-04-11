#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
* to a 2 dimensional array of integers.
 * @width: input width
 * @height: input height
 * Return: the resulting pointer else NULL
 */
int **alloc_grid(int width, int height)
{
	int **y;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	y = malloc(sizeof(int *) * height);

	if (y == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		y[a] = malloc(sizeof(int) * width);

		if (y[a] == NULL)
		{
			for (; a >= 0; a--)
				free(y[a]);

			free(y);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			y[a][b] = 0;
	}

	return (y);
}
