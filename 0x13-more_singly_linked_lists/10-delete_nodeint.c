#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Entry point.
 * @head: pointet to head of list
 * @index: index of node to be deleted
 *
 * Return: 1 (success) or -1 (faliled).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);

	if (!index)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	previous = *head;
	for (count = 0; count < index - 1 && previous != NULL; count++)
		previous = previous->next;
	if (previous == NULL || previous->next == NULL)
		return (-1);

	current = previous->next;
	previous->next = current->next;
	free(current);

	return (1);
}
