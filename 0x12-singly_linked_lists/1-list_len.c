#include "lists.h"
#include <stdio.h>

/**
 * list_len - Entry point.
 * @h: pointer to list
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
