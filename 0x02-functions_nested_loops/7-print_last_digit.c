#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: 'This program prints last digit'
 *
 * Return: Always 0 (success)
 */
int print_last_digit(int c)
{
	int last_d = c % 10;

	if (last_d < 0)
	{
		last_d = last_d * -1;
	}
	_putchar(last_d + '0');
	return (last_d);
}
