#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - adds all data (n) of a linked list.
 * @head: head of list
 *
 * Return: sum of all data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (!head || head == NULL)
		return (0);

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
