#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 *@head: a pointer to a pointer that points to the head of the list.
 *@index: the index of the node.
 * Return: the nth node, or NULL if the node doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int idx_cnt = 0;

	current = head;

	if (!head)
		return (NULL);

	if (index == 0)
		return (head);

	while (current != NULL && idx_cnt != index)
	{
		idx_cnt++;
		current = current->next;
	}

	if (current == NULL)
		return (NULL);
	return (current);
}
