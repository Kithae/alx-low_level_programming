#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string.
 * @s: the string
* Return: the string
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
