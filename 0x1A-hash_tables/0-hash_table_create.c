#include "hash_tables.h"
/**
 * hash_table_create-fun for create hash table
 * @size: size of the table
 * Return: address of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	/* allocate table */
	table = malloc(sizeof(hash_node_t));
	if (table == NULL)
		return (NULL);
	/* allocate arrray of given size */
	array = malloc(sizeof(array) * size);
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}
	/* make each element in the array NULL */
	for (i = 0; i < size; i++)
		array[i] = NULL;
	/* fill the table */
	table->size = size;
	table->array = array;
	return (table);
}
