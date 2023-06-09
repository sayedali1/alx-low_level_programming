#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int key_idx;
	hash_node_t *node = NULL;

	key_idx = key_index((const unsigned char *)key,ht->size);
	node = (ht->array)[key_idx];
	/* printf("value = %s\n", node->key); */
	if (node == NULL || strcmp(key, node->key) != 0)
		return (NULL);
	return (node->value);
}
