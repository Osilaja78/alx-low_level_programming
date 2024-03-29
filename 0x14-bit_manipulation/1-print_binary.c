#include "main.h"
#include <stdio.h>

/**
 * print_binary - Entry point.
 * @n: number to be converted to binary.
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
