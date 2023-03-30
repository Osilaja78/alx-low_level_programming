#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - creates a new node.
 * @head: pointer to the head of the list
 * @str: string to store in the new node
 *
 * Return: the address of the new elelment
 * or NULL if faild.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int count = 0;

	if (!head || !str)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	temp = *head;

	*head = new;
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
	new->next = *head;
	*head = new;
	printf("[%u] %s\n", new->len, new->str);
	return (new);
}
