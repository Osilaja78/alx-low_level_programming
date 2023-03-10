#include "main.h"

char rev_string(char *s);

/**
 * is_palindrome - Entry point
 * @s: string to be checked
 *
 * Description: calls the rev_string function
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	char reversed;

	reversed = rev_string(s);

	if (reversed == *s)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Description: reverses a string.
 *
 * Return: reversed string.
 */
char rev_string(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (rev_string(s + 1));
	}
}
