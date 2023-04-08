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
	int i = 0, j, binary[32];

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		binary[i] =  n & 1;
		n >>= 1;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
	}
}
