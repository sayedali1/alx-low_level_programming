#include "hash_tables.h"
/**
 *key_index-fun to get the index in the hash table
 *@key: the str we wanna know the index for it
 *@size: size of the hash table
 *Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
