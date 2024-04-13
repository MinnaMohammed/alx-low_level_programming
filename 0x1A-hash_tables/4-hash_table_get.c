#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 *
 *@ht: the hash table you want to look into
 *@key: the key
 *
 * Return: the value associated with the key,
 * or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current;

	idx = key_index((unsigned char *)key, ht->size);

	if (!key || !ht || strcmp(key, "") == 0)
		return (NULL);
	current = ht->array[idx];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
