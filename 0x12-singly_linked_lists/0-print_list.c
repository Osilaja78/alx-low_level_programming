#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - Entry point.
 * @h: list to print
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str ==  NULL)
		{
			printf("[%i] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
