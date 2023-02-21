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
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
