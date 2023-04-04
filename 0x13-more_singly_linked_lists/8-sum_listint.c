#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - adds  up the data of every node in a list.
 * @head: pointer to the head of the list
 *
 * Return: sum of all data (n).
 */
int sum_listint(listint_t *head)
{
	int temp, sum = 0;

	while (head != NULL)
	{
		temp = head->n;
		sum += temp;
		head =  head->next;
	}
	return (sum);
}
