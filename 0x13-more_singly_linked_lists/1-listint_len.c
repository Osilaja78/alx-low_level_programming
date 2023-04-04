#include "lists.h"
#include <stdio.h>

/**
 * listint_len - counts the no. of elements in a liked list.
 * @h: pointer to head of linked list
 *
 * Return: no. of elemenst in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
