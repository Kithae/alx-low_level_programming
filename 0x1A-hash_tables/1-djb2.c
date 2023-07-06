#include "hash_tables.h"

/**
 * hash_djb2 - Hash function that implements djb2 algorithm.
 * @str: a string.
 *
 * Return: The new hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int nhash;
	int a;

	nhash = 5381;
	while ((a = *str++))
		nhash = ((nhash << 5) + nhash) + a; /* nhash * 33 + a */

	return (nhash);
}
