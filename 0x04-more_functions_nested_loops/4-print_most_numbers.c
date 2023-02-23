#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: 'This program printd 0 - 9 except 2 & 4'
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		else
		{
			_putchar(i + '0');
			i++;
		}
	}
	_putchar('\n');
}
