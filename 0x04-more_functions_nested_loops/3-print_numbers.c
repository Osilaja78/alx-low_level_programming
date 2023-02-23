#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: 'This program prints 0 - 9'
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
