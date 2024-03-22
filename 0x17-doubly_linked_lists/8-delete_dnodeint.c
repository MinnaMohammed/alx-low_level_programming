#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 *
 *@head: a pointer to a pointer that points to the head of the list.
 *@index: the index at which the node is going to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int idx_cnt = 0;

	current = *head;

	if (!(*head))
		return (1);

	if (index == 0)
	{
		if (current->next != NULL)
			current->next->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL && idx_cnt != index)
	{
		idx_cnt++;
		current = current->next;
	}

	if (current->next == NULL)
	{
		if (current->prev != NULL)
			current->prev->next = NULL;
		free(current);
		return (1);
	}

	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);

	return (1);
}
