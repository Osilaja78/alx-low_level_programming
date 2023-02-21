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
	int i,j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				_putchar(i * j);
			}
			else
			{
				_putchar(i * j);
			}
		}
		_putchar('\n');
	}
}
