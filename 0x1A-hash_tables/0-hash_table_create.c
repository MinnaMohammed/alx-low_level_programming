#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 *
 *@size: the size of the array
 * 
 * Return: a pointer to the newly created hash table or NULL if the fn fails
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	new_ht = malloc(sizeof(hash_table_t)*size);

	if (!new_ht)
		return (NULL);
	return(new_ht);
}
