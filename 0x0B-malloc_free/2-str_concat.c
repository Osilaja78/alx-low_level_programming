#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - Entry point.
 * @s1: string one.
 * @s2: string two.
 *
 * Description: concatenates two strings.
 *
 * Return: pointer to joined string.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1 = 0;
	int len2 = 0;
	int len, i, j;

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	len = len1 + len2;
	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	j = 0;

	for (i = 0; i <= len; i++)
	{
		if (i < len1)
		{
			str[i] = s1[i];
		}
		else
		{
			str[i] = s2[j];
			j++;
		}
	}
	return (str);
}
