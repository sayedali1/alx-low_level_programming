#include "hash_tables.h"

/**
 * hash_table_delete - free and delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node, *next;
	if (!ht)
		return;

	if (!(ht->array))
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		node = (ht->array)[i];
		while (node)
		{
			next = node->next;
			if (node->key)
				free(node->key);
			if (node->value)
				free(node->value);
			node->key = NULL;
			node->value = NULL;
			free(node);
			node = next;
		}
	}
	free(ht->array);
	free(ht);
}


