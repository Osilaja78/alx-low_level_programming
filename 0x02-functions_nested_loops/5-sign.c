#include "main.h"

/**
 * print_sign - Entry point
 * @n: variable to be checked
 *
 * Description: 'This program checks if n is +ve or -ve'
 *
 * Return: Always 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
	return (0);
}
