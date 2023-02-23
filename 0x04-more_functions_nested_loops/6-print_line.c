#include "main.h"

/**
 * print_line - Entry point
 * @n: the variable to be checked
 *
 * Description: 'This program prints lines'
 *
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
