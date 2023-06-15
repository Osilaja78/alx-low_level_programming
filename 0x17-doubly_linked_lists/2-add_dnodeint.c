#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node to a list.
 * @head: head of the list
 * @n: number to add to list
 *
 * Return: address of new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (!head || !n)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	temp = *head;
	*head = new;

	new->n = n;
	new->next = temp;
	new->prev = NULL;
	return (new);
}
