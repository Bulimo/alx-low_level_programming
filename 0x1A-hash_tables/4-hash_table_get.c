#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key of the @value
 * Return: value of the key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *head = NULL;

	if (!ht || !(ht->array) || !key || *key == '\0')
		return (NULL);
	/* get the index from the key */
	index = get_index(key, ht->size);

	/* check if we have an entry at that index otherwise return null */
	if (ht->array[index] == NULL)
		return (NULL);
	/* we have an entry, compare the keys */
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	/* we do not have a match, so check in the collision list */
	/* if (ht->array[index]->next == NULL) */
	/*	return (NULL);		 no collision, no key match found */
	head = ht->array[index]->next;
	while (head)
	{
		/* check if key matches that of current element in collision list */
		puts("checks being done in the collision list");
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}
	/* no key match found */
	return (NULL);
}
