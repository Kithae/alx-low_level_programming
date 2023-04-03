#include "main.h"
#include <stdio.h>

/**
 * _chessboard - a function that prints the chessboard.
 * @a: the array 
* Return: void
 */

void print_chessboard(char (*a)[8])
{
int row0, clmn0 = 0;

	while (clmn0 < 8)
	{
		row0 = 0;
		while (row0 < 8)
			_putchar(a[clmn0][row0++]);
		_putchar('\n');
		clmn0++;
	}
}
