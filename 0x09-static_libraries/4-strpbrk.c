#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Entry point
 * @s: string to be checked
 * @accept: string to be searched for
 *
 * Description: This function searches a string for any of a set of bytes.
 *
 * Return: A pointer to the matching string.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; *s != '\0'; i++)
	{
		p = accept;

		for (j = 0; *p != '\0'; j++)
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}

	return (NULL);
}
