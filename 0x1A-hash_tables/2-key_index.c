#include "hash_tables.h"

/**
 * key_index - a function that gets a hash table array index
* @key: an index key.
 * @size: hash table array size.
 *
 * Return: key index.
 *
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
