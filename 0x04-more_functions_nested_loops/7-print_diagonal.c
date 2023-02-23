#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: the no. of time to print diagonal line
 *
 * Description: 'This program prints\ n times'
 *
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (i < n)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
