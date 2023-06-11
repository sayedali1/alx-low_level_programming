#include "hash_tables.h"
/**
 * create_and_add_node - fun to add key in the hash
 * @ht: pointer to the hash table
 * @key: str we wanna add to the tale
 * @value: value we wanna add to the key
 * @idx: index in the hash table
 * Return: 1 if sucess, 0 otherwise
 */
int create_and_add_node(hash_table_t *ht, const char *key, const char *value,
			unsigned long int idx)
{
	hash_node_t *node = NULL;
	char *k;
	char *v;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	k = strdup(key);
	if (!k)
	{
		free(node);
		return (0);
	}

	v = strdup(value);
	if (!v)
	{
		free(k);
		free(node);
		return (0);
	}

	node->key = k;
	node->value = v;

	if ((ht->array)[idx] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[idx];
	(ht->array)[idx] = node;

	return (1);
}
/**
 * hash_table_set - fun to add key in the hash
 * @ht: pointer to the hash table
 * @key: str we wanna add to the tale
 * @value: value we wanna add to the key
 * Return: 1 if sucess, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *node = NULL;

	if (key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];
	while (node && strcmp(key, node->key) != 0)
		node = node->next;
	if (node != NULL)
		node->value = strdup(value);

	return (create_and_add_node(ht, key, value, index));
}
