#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 * @c: The character to print
 *
 * Description: 'This program check if an alpha is lowercase'
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
