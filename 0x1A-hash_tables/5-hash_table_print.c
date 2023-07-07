#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head = NULL;
	unsigned long int count = 0, i = 0;

	printf("%c", '{');
	if (ht == NULL || ht->array == NULL)
	{
		printf("%c\n", '}');
		return;
	}

	/* iterate through the hash table list */
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("%s\'%s\': \'%s\'", (count > 0 ? ", " : ""), ht->array[i]->key,
					ht->array[i]->value);
			count++;

			/* check if we have a collision table and print */
			head = ht->array[i]->next;
			while (head)
			{
				printf("%s\'%s \':\'%s\'", (count > 0 ? ", " : ""), head->key,
						head->value);
				count++;
				head = head->next;
			}
		}
	}
	printf("%c\n", '}');
}
