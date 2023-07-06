#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct hash_node_s - a hash table Node
 * @key: a string
* @value: The key value
 * @next: next node pointer
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - a data structure
 * @size: array size
 * @array: An array
*/
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
void hash_table_print(const hash_table_t *ht);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - sorted hash table Node
 * @key: a string
* @value: a key value
 * @next: next node pointer
 * @sprev: previous element pointer
 * @snext: next element pointer
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - a data structure
 * @size: array size
 * @array: array
* @shead: first element pointer
 * @stail: last element pointer
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

char *shash_table_get(const shash_table_t *ht, const char *key);
shash_table_t *shash_table_create(unsigned long int size);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_print(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);

#endif
