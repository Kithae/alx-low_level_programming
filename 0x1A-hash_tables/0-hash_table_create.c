#include "hash_tables.h"

/**
 * hash_table_create - a function for creating hash table
 * @size: array size.
 *
 * Return: new hash table pointer, else NULL.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;
	unsigned long int a;

	hasht = malloc(sizeof(hash_table_t));
	if (hasht == NULL)
		return (NULL);

	hasht->size = size;
	hasht->array = malloc(sizeof(hash_node_t *) * size);
	if (hasht->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		hasht->array[a] = NULL;

	return (hasht);
}
