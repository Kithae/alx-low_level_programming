#include "main.h"

/**
 * get_bit - a function for returning bit values at given indexes.
 * @n: unsigned integer.
 * @index: the bit index.
 *
 * Return: bit value, else -1 for error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 64)
		return (0);

	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
		{
			return (n & 1);
		}
	}

	return (-1);
}
