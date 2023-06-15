#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at idx.
 * @h: head node of list
 * @idx: index to add new node
 * @n: number to add to new node
 *
 * Return: address of new node or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i;

	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		if (*h != NULL)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}

	current = *h;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	new->prev = current;
	if (current->next != NULL)
		current->next->prev = new;
	current->next = new;

	return (new);
}
