#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - creates a new node.
 * @head: pointer to pointer to head of lsit
 * @n: int to add to list
 *
 * Return: address of new node or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;

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

	new->next = temp;
	*head = new;
	return (new);
}
