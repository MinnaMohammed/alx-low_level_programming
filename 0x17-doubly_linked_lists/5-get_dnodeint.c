#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list.
 * @head: pointer to head of the list
 * @index: index of the node to search for
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;

	unsigned int size = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
