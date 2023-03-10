#include "main.h"
#include <ctype.h>

/**
 * _isupper - Entry point
 * @c: variable to be checked
 *
 * Description: 'This program prints an upper alphabet'
 *
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
