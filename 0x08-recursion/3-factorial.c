#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that gets the length of a prefix substring.
 * @n: the integer
* Return: -1 error, else the result
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
