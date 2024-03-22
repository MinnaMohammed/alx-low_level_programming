#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 *@h: a pointer to a pointer that points to the head of the list.
 *@idx: the index of the list where the new node should be added.
 *@n: integer
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int idx_cnt = 0;

	current = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (current != NULL && idx_cnt != idx)
	{
		idx_cnt++;
		current = current->next;
	}
	if (current == NULL || idx_cnt < idx)
	{
		free(new);
		return (NULL);
	}
	if (current->next == NULL)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	new->next = current;
	new->prev = current->prev;
	current->prev = new;
	new->prev->next = new;
	return (new);


}
