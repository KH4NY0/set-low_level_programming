#include "hash_tables.h"

/**
 * make_node - Creates a new hash node
 * @key: The key to duplicate and store
 * @value: The already-duplicated value to store
 *
 * Return: A pointer to the new node, or NULL on failure
 */
static hash_node_t *make_node(const char *key, char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}

	node->value = value;
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key, cannot be an empty string
 * @value: The value associated with the key, is duplicated
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}

	new_node = make_node(key, value_copy);
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
