#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head = NULL, *node = NULL;
	unsigned long int i = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	/* iterate through the hash table list */
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			/* check if we have a collision table and print */
			head = ht->array[i]->next;
			while (head)
			{
				node = head;
				head = head->next;
				free_node(node);
			}
			free_node(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
