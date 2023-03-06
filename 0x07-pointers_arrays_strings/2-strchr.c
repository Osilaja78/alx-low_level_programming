#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: string to be checked
 * @c: character to find in @s
 *
 * Description: This function locates a character in a string.
 *
 * Return: A pointer to @c or NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
