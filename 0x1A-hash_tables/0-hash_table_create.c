#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table array
 * Return: pointer to hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	/* allocate memory for a hash_table_t struct */
	if (size == 0)
		return (NULL);
	table = calloc(sizeof(hash_table_t), 1);
	if (table == NULL)
		return (NULL);
	table->size = size;
	/* allocate memory for an array of hash_node_t structs */
	table->array = calloc(sizeof(hash_node_t *), size);
	if (table->array == NULL)
		return (NULL);
	return (table);
}
