#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: array to be printed
 * @n: no. of elements to be printed
 *
 * Description: Prints n number of elements in a  array
 *
 * Return: Alwaye 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
	{
		if (i == n)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
