#include "hash_tables.h"

/**
 * hash_table_delete - a function for deleting hash table.
 * @ht: hash table pointer.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *nnode, *tmp;
	unsigned long int a;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			nnode = ht->array[a];
			while (nnode != NULL)
			{
				tmp = nnode->next;
				free(nnode->key);
				free(nnode->value);
				free(nnode);
				nnode = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
