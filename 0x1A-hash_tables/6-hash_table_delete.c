#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table = ht;
	hash_node_t *currentNode, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			currentNode = ht->array[i];

			while (currentNode != NULL)
			{
				tmp = currentNode->next;
				free(currentNode->key);
				free(currentNode->value);
				free(currentNode);
				currentNode = tmp;
			}
		}
	}
	free(table);
}
