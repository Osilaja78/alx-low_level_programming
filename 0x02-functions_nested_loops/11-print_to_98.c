#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n: variable to be checked
 *
 * Description: 'This prints form n to 98'
 *
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
		{
			printf("%d\n", n);
			n++;
		}
		else
		{
			printf("%d, ", n);
			n++;
		}
	}
	_putchar('\n');
}
