#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: 'This program prints the 9 times table'
 *
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int i = 0;
	int j, k;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			k = i * j;

			if (k < 10)
			{
				if (j > 1)
				{
					_putchar(' ');
				}
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}

			if (j == 9)
			{
				j++;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				j++;
			}
		}
		i++;
		_putchar('\n');
	}
}
