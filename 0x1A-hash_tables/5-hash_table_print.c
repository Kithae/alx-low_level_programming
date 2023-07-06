#include "./hash_tables.h"

/**
 * hash_table_print - function for printing hash table.
 * @ht: hash table pointer.
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nnode;
	unsigned long int a;
	unsigned char c_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (c_flag == 1)
				printf(", ");

			nnode = ht->array[a];
			while (nnode != NULL)
			{
				printf("'%s': '%s'", nnode->key, nnode->value);
				nnode = nnode->next;
				if (nnode != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
