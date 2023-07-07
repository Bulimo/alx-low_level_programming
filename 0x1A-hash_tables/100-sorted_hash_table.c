#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 * Return: table or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	/* allocate memory for the table array */
	table->array = calloc(sizeof(shash_node_t *), size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}


/**
 * create_shash_node - creates a node in the sorted hash table
 * @key: key of the new value to be added
 * @value: value of the new node to be added
 * Return: new node or NULL
 */
shash_node_t *create_shash_node(const char *key, const char *value)
{
	shash_node_t *new = NULL;

	/* confirm that key and value are not empty */
	if (!key || !(*key) || !value)
		return (NULL);

	/* create new node and initialize */
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->sprev = NULL;
	new->snext = NULL;
	new->key = strdup(key);
	if (!(new->key))
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (!(new->value))
	{
		free(new->key);
		free(new);
		return (NULL);
	}

	return (new);
}

/**
 * shash_table_set - adds an element into the sorted hash table
 * @ht: sorted hash table
 * @key: key of the new value to be added
 * @value: value of the new node to be added
 * Return: 1 on succes, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	shash_node_t *new = NULL, *head = NULL;

	/* check the table, key, and value are not empty */
	if (!ht || !(ht->array) || !key || !(*key) || !value)
		return (0);

	/* get the new node to add */
	new = create_shash_node(key, value);
	if (!new)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	/* check if we have an entry at the index */
	if (ht->array[idx])
	{
		/* we do have an entry check for collision or update */
		head = ht->array[idx];
		while (head)
		{
			/* check if current element's key match and update value */
			if (strcmp(head->key, key) == 0)
			{
				free(head->value);
				head->value = new->value;
				new->value = NULL;
				free_shash_node(new);
				return (1);
			}
			head = head->next;
		}

		/* we have no match, so add at the begining */
		new->next = ht->array[idx];
	}
	ht->array[idx] = new;
	/* add the new node into the sorted linked list */
	return (insert_sorted_list(ht, new));
}

/**
 * free_shash_node - function to free hash table node
 * @node: the node to be freed
 * Return: nothing
 */
void free_shash_node(shash_node_t *node)
{
	/* confirm the node is not null */
	if (node)
	{
		if (node->key)
			free(node->key);
		if (node->value)
			free(node->value);
		node->key = NULL;
		node->value = NULL;
		node->next = NULL;
		node->sprev = NULL;
		node->snext = NULL;
		free(node);
		node = NULL;
	}
}


/**
 * insert_sorted_list - inserts into a sorted linked list
 * @ht: sorted hash table
 * @node: node to be inserted
 * Return: 1 on success, 0 otherwise
 */
int insert_sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *head = NULL;

	/* confirm valid table, array, node and key of the node */
	if (!ht || !(ht->array) || !node || !(node->key) || !(*(node->key)))
		return (0);

	/* insert in an empty list */
	if (!(ht->shead) && !(ht->stail))
	{
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, node->key) >= 0)	/* insert at the head */
	{
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else if (strcmp(ht->stail->key, node->key) <= 0)	/* insert at the end */
	{
		node->sprev = ht->stail;
		ht->stail->snext = node;
		ht->stail = node;
	}
	else
	{
		head = ht->shead;
		while (head->snext && (strcmp(head->key, node->key) < 0))
			head = head->snext;
		node->snext = head;
		node->sprev = head->sprev;
		head->sprev->snext = node;
		head->sprev = node;
	}
	return (1);
}


/**
 * shash_table_get - retrieves a value associated witha key
 * @ht: sorted table
 * @key: key of the value to retrieve
 * Return: value of the Key or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	shash_node_t *head = NULL;

	/* confirm for valid table and key */
	if (!ht || !(ht->array) || !key || !(*key))
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	if (!(ht->array[idx]))
		return (NULL);

	/* we have an entry at that index position, check for match */
	head = ht->array[idx];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}

	/* no key match found */
	return (NULL);
}



/**
 * shash_table_print - prints sorted hash table
 * @ht: sorted table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head = NULL;
	char *comma = "";

	if (!ht || !(ht->array) || !(ht->shead))
		return;

	putchar('{');

	/* iterate through the sorted linked list */
	head = ht->shead;
	while (head)
	{
		printf("%s'%s': '%s'", comma, head->key, head->value);
		comma = ", ";
		head = head->snext;
	}
	printf("%c\n", '}');
}


/**
 * shash_table_print_rev - prints sorted hash table in reverse
 * @ht: sorted table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *head = NULL;
	char *comma = "";

	if (!ht || !(ht->array) || !(ht->stail))
		return;

	putchar('{');

	/* iterate through the sorted linked list */
	head = ht->stail;
	while (head)
	{
		printf("%s'%s': '%s'", comma, head->key, head->value);
		comma = ", ";
		head = head->sprev;
	}
	printf("%c\n", '}');
}


/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: sorted hash table to be deleted
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *head = NULL, *node = NULL;

	if (!ht || !(ht->array) || !(ht->shead))
		return;

	/* iterate through the sorted list */
	head = ht->shead;
	while (head)
	{
		node = head;
		head = head->snext;
		free_shash_node(node);
	}
	free(ht->array);
	free(ht);
}
