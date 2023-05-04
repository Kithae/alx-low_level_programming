#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - a function for converting binary nnumbers
* to unsigned integers
* @b: a string pointer.
*
* Return: the resulting number, else 0.
*/
unsigned int binary_to_uint(const char *b)
{
int a = 0
	unsigned int bin_num = 0

		if (b == 0)
		return (0);
	for (b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (b[a] != '\0'; a++)
	{
		bin_num <<= 1;
		if (b[a] == '1')
			bin_num += 1;
	}
	return (bin_num);
}
