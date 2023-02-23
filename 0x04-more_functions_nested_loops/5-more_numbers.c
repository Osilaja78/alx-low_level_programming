#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: 'This program prints 0 to 14 multiplied by 10'
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int i = 0;
	int j,k;

	while (i < 11)
	{
		j = 0;

		while (j < 15)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
