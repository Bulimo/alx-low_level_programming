#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head = NULL;
	unsigned long int i = 0;
	char *comma = "";

	if (ht == NULL || ht->array == NULL)
		return;

	printf("%c", '{');
	/* iterate through the hash table list */
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			/* check if we have a collision table and print */
			head = ht->array[i];
			while (head)
			{
				printf("%s'%s': '%s'", comma, head->key, head->value);
				comma = ", ";
				head = head->next;
			}
		}
	}
	printf("%c\n", '}');
}
