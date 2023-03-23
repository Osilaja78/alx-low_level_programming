#include "main.h"
#include <string.h>

char rev_string(char *str);

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
	char reverse;

	reverse = rev_string(s);

	if (reverse == *s)
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
char rev_string(char *str)
{
	char *rev[] = "\0";

	if (*str == '\0')
	{
		return (1);
	}
	else
	{
		strncat(rev, str, 1);
		rev_string(str + 1);
	}
	return (rev);
}
