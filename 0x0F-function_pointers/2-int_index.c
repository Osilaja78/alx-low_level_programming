#include "function_pointers.h"

/**
 * int_index - Enry point.
 * @array: array to be checked
 * @size: size of the array
 * @cmp: pointer to a function
 *
 * Return: int.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, temp;

	if (size <= 0)
		return (-1);

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			temp = cmp(array[i]);

			if (temp != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
