#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - creates a new node at the end.
 * @head: pointer to a ponter to the head of the list
 * @n: int to add to linked list
 *
 * Return: address of new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (!n)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (!new->n)
	{
		free(new);
		return (NULL);
	}

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;
	return (new);
}
