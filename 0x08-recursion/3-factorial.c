#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that gets the length of a prefix substring.
 * @n: the integer
* Return: -1 error, else the result
*/

int factorial(int n)
{

	If(n < 0)
	Return(-1);
	If(n == 0)
	Return(1);
	Return(n * factorial(n - 1));
}
