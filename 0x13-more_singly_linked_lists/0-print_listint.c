#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints int contents of a list.
 * @h: head of the list
 *
 * Return: no. of elements in the list.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
