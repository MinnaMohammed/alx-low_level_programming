#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table.
 *
 *@ht: the hash table you want to add or update the key/value to
 *@key: the key (can not be an empty string)
 *@value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node, *current_node;

	if (!key || strcmp(key, "") == 0)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[idx];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (!current_node->value)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!(new_node->key))
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!(new_node->value))
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
