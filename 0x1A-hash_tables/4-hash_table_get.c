#include "hash_tables.h"
/**
 * hash_table_get- fun to get a value of a given key
 * @ht:pointer the the hash table
 * @key: the key of the value
 * Return: pointer to the value we got
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int key_idx;
	hash_node_t *node = NULL;

	if (!ht || !key)
		return (NULL);
	key_idx = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[key_idx];

	if (node != NULL && strcmp(key, node->key) != 0)
		node = node->next;

	if (!node)
		return (NULL);
	else
		return (node->value);
}
