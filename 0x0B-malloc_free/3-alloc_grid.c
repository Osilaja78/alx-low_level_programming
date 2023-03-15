#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - Entry point.
 * @width: width of array
 * @height: height of array
 *
 * Description: prints a 2d array.
 *
 * Return: pointer to 2d array.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i <= height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (j = i; j <= 0; j--)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			arr[k][l] = 0;
		}
	}
	return (arr);
}
