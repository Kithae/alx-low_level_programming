#include "main.h"
#include <stdio.h>

/**
 * sqrt_2 – checks between 1 to n.
 * @x: the integer similar to n
* @y: the integer that checks from 1 to n
* Return: 0, success, else -1 error
 */

int sqrt_2(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrt_2(x, y + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural square root.
 * @n: the integer
* Return: -1 error, else the result
 */

int _sqrt_recursion(int n)
{
return (sqrt2(n, 1));
}
