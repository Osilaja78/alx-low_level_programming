#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - Entry point.
 * @str: string to be copied.
 *
 * Description: copies a given string to an allocated memory.
 *
 * Return: pointer to copied string.
 */
char *_strdup(char *str)
{
	int i;
	int str_len = 0;
	char *string;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	string = malloc((str_len + 1) * sizeof(char));

	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= str_len; i++)
	{
		string[i] = str[i];
	}
	return (string);
}
