#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to be updated
 * @key: key of the @value
 * @value: data to be stored, associated with @key
 * Return: 1 if successful, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL;

	/* check that the table, key and key[0] are not null */
	if (!ht || !(ht->array) || !key || *key == '\0' || !value)
		return (0);
	/* create a new hash_table_node */
	new = create_node(key, value);
	if (new == NULL)
		return (0);
	index = get_index(key, ht->size);
	/* check if we have an entry at the index of the table */
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else if (strcmp(ht->array[index]->key, key) == 0)
	{
		/* we have an entry with same key, so update entry */
		free(ht->array[index]->value);
		ht->array[index]->value = new->value;
		new->value = NULL;
		free_node(new);
	}
	else
	{
		/* we have a collision case, handle it */
		if (!store_collision(ht, key, new))
		{
			free_node(new);
			return (0);
		}
	}
	return (1);
}

/**
 * create_node - function to create a hash table node
 * @key: key of the new node
 * @value: value of the new node
 * Return: pointer to new node or NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new = NULL;
	char *k = NULL, *v = NULL;

	/* confirm that key is not NULL or empty */
	if (!key || *key == '\0' || !value)
		return (NULL);
	k = strdup(key);
	if (k == NULL)
		return (NULL);
	v = strdup(value);
	if (v == NULL)
	{
		free(k);
		return (NULL);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(k);
		free(v);
		return (NULL);
	}
	new->key = k;
	new->value = v;
	new->next = NULL;
	return (new);
}

/**
 * free_node - function to free hash table node
 * @node: the node to be freed
 * Return: nothing
 */
void free_node(hash_node_t *node)
{
	/* confirm the node is not null */
	if (node)
	{
		if (node->key)
			free(node->key);
		node->key = NULL;
		if (node->value)
			free(node->value);
		node->value = NULL;
		free(node);
		node = NULL;
	}
}

/**
 * store_collision - function to store node in case of a collision
 * @ht: hash table to store the node
 * @key: key of new node key/value pair
 * @new: new node to be added
 * Return: 1 if successful, 0 otherwise
 */
int store_collision(hash_table_t *ht, const char *key, hash_node_t *new)
{
	unsigned long int index = 0;
	hash_node_t *head = NULL;

	if (!ht || !(ht->array) || !key || *key == '\0')
		return (0);
	index = get_index(key, ht->size);
	head = ht->array[index];
	if (head == NULL)
		return (0);
	while (head)
	{
		/* check if current element's key match */
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = new->value;
			new->value = NULL;
			free_node(new);
			return (1);
		}
		head = head->next;
	}
	/* we add the new node at the begining of the list */
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

/**
 * get_index - function to get generated index
 * @key: key of the node
 * @size: size of the table
 * Return: index value
 */
unsigned long int get_index(const char *key, unsigned long int size)
{
	return (key_index((const unsigned char *)key, size));
}
