#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 *@ht: the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			free(current->value);
			free(current->key);
			free(current);
			current = current->next;
		}
	}
	free(ht->array);
	free(ht);
}
