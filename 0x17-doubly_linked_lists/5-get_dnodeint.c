#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returnd the nth node of a linked list.
 * @head: head node of list
 * @index: index to get
 *
 * Return: node at index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
