#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: the string
* Return: a pointer to the first occurrence of the character
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
