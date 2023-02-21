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
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
