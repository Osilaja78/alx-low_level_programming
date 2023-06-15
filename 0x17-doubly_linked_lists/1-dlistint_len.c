#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - counts the no. of nodes in a list.
 * @h: head of list
 *
 * Return: the number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
