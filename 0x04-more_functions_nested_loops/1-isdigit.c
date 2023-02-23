#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Entry point
 * @c: variable to be checked
 *
 * Description: 'This program checs if a variable is digit'
 *
 * Return: Always 0 (success)
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
