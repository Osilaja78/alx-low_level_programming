#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Entry point.
 * @min: minimum no.
 * @max: maximum no.
 *
 * Description: creates an array and fills it with no.s.
 *
 * Return: pointer to the array.
 */
int *array_range(int min, int max)
{
	int *ptr, i;
	int arr_len;

	if (min > max)
	{
		return (NULL);
	}

	arr_len = max - min + 1;
	ptr = malloc(sizeof(int) * arr_len);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < arr_len; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
