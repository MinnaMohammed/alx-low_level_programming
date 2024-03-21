#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 *@head: a pointer to a pointer that points to the head of the list.
 *@n: integer
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	current = *head;

	if (!(*head))
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
		current = current->next;

	new->n = n;
	current->next = new;
	new->prev = current;
	new->next = NULL;

	return (new);
}
