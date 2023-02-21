#include "main.h"
#include <stdlib.h>

/**
 * _abs - Entry point
 *
 * Description: 'This program prints the absolute of a number'
 *
 * Return: Always 0 (success)
 */
int _abs(int c)
{
	int absolute = abs(c);

	_putchar(absolute);
	return (0);
}
