#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: string to be counted
 *
 * Description: count the length of a string
 *
 * Return: int (length of @s)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
