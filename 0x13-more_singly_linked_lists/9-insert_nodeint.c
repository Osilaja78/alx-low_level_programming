#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Entry point.
 * @head: pointer to head of list
 * @idx: index to add new node
 * @n: data of new node
 *
 * Return: address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *previous, *new;
	unsigned int count = 0;

	if (!head || !*head || !n)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (!new->n)
	{
		free(new);
		return (NULL);
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	while (current != NULL && count != idx)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (current == NULL || !current)
		return (NULL);

	new->next = previous->next;
	previous->next = new;
	return (new);
}
