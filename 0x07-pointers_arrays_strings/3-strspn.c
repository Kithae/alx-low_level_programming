#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string
 * @accept: the source of byte
* Return: the number of bytes in s
*/

unsigned int _strspn(char *s, char *accept)
{
int x;
	int fulllength = 0;
	int initial;

	while (*s)
	{
		x = 0;
		initial = fulllength;
		while (*(accept + x) != '\0')
		{
			if (*(accept + x) == *s)
				fulllength++;
			x++;
		}
		if (initial == fulllength)
			break;
		s++;
	}
	return (fulllength);
}
