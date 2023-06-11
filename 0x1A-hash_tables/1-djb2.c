#include "hash_tables.h"
/**
 * hash_djb2-algorthem for hashing
 * @str: str that we wanna know the index for it
 * Return: the index
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381; /* hash code */
	while ((c = *str++))
		hash = (hash * 33) + c;
	return (hash);
}
