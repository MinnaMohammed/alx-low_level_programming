#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 *
 *@h: a pointer to the head of the doubly linked list.
 *
 * Return: the number of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t total = 0;

	current = h;

	if (!h)
		return (0);

	while (current != NULL)
	{
		current = current->next;
		total++;
	}

	return (total);
}
