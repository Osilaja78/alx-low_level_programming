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
	int j;

	while (i < 10)
	{
		j = 0;

		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}