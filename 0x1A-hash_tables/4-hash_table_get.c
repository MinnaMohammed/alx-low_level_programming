#include "hash_tables.h"
/**
 * hash_table_get -  retrieves a value associated with a key
 *
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: the value associated with the element. Otherwise, NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	char *value;
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	idx = key_index((const unsigned char *)key, ht->size);

	if (idx >= ht->size)
	{
		return (NULL);
	}
	node = ht->array[idx];

	while (node != NULL && strcmp(node->key, key) != 0)
	{
		node = node->next;
	}

	value = (node == NULL) ? NULL : node->value;

	return (value);
}
