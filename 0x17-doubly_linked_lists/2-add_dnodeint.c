#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 *@head: a pointer to a pointer that points to the head of the list.
 *@n: integer
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;


	if (!(*head))
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	(*head)->prev = new;
	new->next = (*head);
	new->prev = NULL;
	(*head) = new;

	return (*head);
}
