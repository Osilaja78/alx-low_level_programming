#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Entry point
 *
 * Description: 'This program checks if a value is alpha'
 *
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
