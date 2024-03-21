#include "list.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 *
 *@head: a pointer to the head of the doubly linked list.
 *
 * Return: the sum of all the data in a list
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;

	if (!head)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
