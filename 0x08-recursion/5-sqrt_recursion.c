#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - a function that returns the natural square root.
 * @n: the integer
* Return: -1 error, else the result
 */

int _sqrt_recursion(int n)
{
if (n <= 0)
	return (-1);
	return (_find_sqrt(1, n));
}
