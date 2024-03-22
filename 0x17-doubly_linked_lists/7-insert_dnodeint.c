#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: a pointer to a pointer that points to the head of the list.
 * @idx: the index of the list where the new node should be added.
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new, *current;
    unsigned int idx_cnt = 0;

    if (h == NULL)
        return (NULL);

    current = *h;

    while (current != NULL && idx_cnt < idx)
    {
        idx_cnt++;
        current = current->next;
    }

    if (idx_cnt < idx)
        return (NULL);

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    if (idx == 0)
    {
        new->prev = NULL;
        new->next = *h;
        if (*h != NULL)
            (*h)->prev = new;
        *h = new;
        return (new);
    }
    else if (idx_cnt == idx)
    {
        new->next = current;
        new->prev = current->prev;
        current->prev = new;
        if (new->prev != NULL)
            new->prev->next = new;
        return (new);
    }
    else
    {
        free(new);
        return (NULL);
    }
}

