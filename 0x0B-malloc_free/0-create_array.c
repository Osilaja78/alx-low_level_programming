#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Entry point.
 * @size: size of the array.
 * @c: char to fill the array.
 *
 * Descriprion: creates an array and initializes it with @c.
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
		free(arr);
	}

	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
