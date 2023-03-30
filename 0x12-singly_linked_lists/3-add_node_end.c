#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - creates a new node at the end.
 * @head: pointer to a pointer to the head
 * @str: string to be added
 *
 * Return: address of the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current_node;
	unsigned int count = 0;

	if (!str)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	while (*str)
	{
		count++;
		str++;
	}

	new->len = count;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current_node = *head;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	current_node->next = new;
	return (new);
}
