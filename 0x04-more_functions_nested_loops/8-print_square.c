#include "main.h"

/**
 * print_square - Entry point
 * @size: the variable to be checked
 *
 * Description: 'This program prints lines'
 *
 * Return: Always 0 (success)
 */
void print_square(int size)
{
	int i = 0;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (i < size)
	{
		j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
