#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
* of a square matrix of integers.
 * @size: the matrix arrays
 * @a: the square
* Return: void
 */

void print_diagsums(int *a, int size)
{
int initx, sum1, sum2, hory1, hory2, row;

	initx = 0, sum1 = 0, sum2 = 0, hory1 = 0, hory2 = 0, row = 0;
	while (initx < size * size)
	{
		if (initx == hory1 + (row * size))
			sum1 += a[initx];
		if (initx == (size - hory2 - 1) + (row * size))
			sum2 += a[initx];
		if (((initx + 1) % size) == 0)
			row++, hory1++, hory2++;
		initx++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
