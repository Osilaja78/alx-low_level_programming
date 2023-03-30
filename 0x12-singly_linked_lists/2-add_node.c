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
	list_t *temp;
	unsigned int count = 0;

	new = malloc(sizeof(list_t));
	temp = *head;

	*head = new;
	new->str = strdup(str);

	while (*str)
	{
		count++;
		str++;
	}
	new->len = count;
	new->next = temp;
	printf("[%u] %s\n", new->len, new->str);
	return (new);
}
