#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: string to be counted
 *
 * Description: count the length of a string
 *
 * Return: int (length of @s)
 */
int len = 0;

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		len = len + 1;
		_strlen_recursion(s + 1);
	}
	return (len);
}
