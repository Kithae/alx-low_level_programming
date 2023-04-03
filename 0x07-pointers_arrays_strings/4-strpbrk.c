#include "main.h"
#include <stdio.h> 

/**
 * _ strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the string
 * @accept: the source of bytes
* Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
int x;

	while (*s)
	{
		x = 0;
		while (*(accept + x) != '\0')
		{
			if (*(accept + x) == *s)
				return (s);
			x++;
		}
		s++;
	}
	return (0);
}
