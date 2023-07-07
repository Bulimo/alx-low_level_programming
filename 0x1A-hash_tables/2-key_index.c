#include "hash_tables.h"

/**
 * key_index - function that generates the index of a key
 * @key: key of the new node
 * @size: size of the array of the hash table
 * Return: index at of the key/value pair will be stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	if (size > 0)
		index = hash_djb2(key) % size;
	return (index);
}
