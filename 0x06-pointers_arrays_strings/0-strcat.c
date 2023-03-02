#include "main.h"
#include <string.h>

/**
 * _strcat - Entry point.
 * @src: source
 * @dest: destination
 *
 * Description: Concatenates two strings.
 *
 * Return: Alwats 0
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		dest_len++;
		i++;
	}

	while (src[j] != '\0')
	{
		dest[dest_len + j] = src[j];
		j++;
	}

	dest[dest_len + j] = '\0';
	return (dest);
}
