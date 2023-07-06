#include "hash_tables.h"

/**
 * hash_table_get - function for retrieving key value
 * @ht: A hash table pointer.
 * @key: the value key.
 *
 * Return: a key value else NULL.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nnode;
	unsigned long int a;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	a = key_index((const unsigned char *)key, ht->size);
	if (a >= ht->size)
		return (NULL);

	nnode = ht->array[a];
	while (nnode && strcmp(nnode->key, key) != 0)
		nnode = nnode->next;

	return ((nnode == NULL) ? NULL : nnode->value);
}
