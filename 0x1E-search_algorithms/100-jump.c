#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 * using the jump_search algorithm.
 *
 * @array: array to search.
 * @size: no. of elements in the array.
 * @value: value to search for.
 *
 * Return: index of found elemnt.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0, i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	while (array[step] < value && step < size)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);

		prev = step;
		step += sqrt(size);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	for (i = prev; i <= step && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
