#include "hash_tables.h"

/**
 * hash_table_set - a function for addig or updating hash table elements.
 * @ht: hash table pointer to the.
 * @key: a key.
 * @value: key value.
 *
 * Return: -1 else 0.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *curr;
	char *v_copy;
	unsigned long int idx, a;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (a = idx; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = v_copy;
			return (1);
		}
	}

	curr = malloc(sizeof(hash_node_t));
	if (curr == NULL)
	{
		free(v_copy);
		return (0);
	}
	curr->key = strdup(key);
	if (curr->key == NULL)
	{
		free(curr);
		return (0);
	}
	curr->value = v_copy;
	curr->next = ht->array[idx];
	ht->array[idx] = curr;

	return (1);
}
