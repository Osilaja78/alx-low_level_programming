#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * using binary search algorithm.
 * @array: arrat to be searched.
 * @size: no of elements in array.
 * @value: value to search for.
 *
 * Return: index of found value.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, left, right;

	left = 0;
	right = size - 1;

	if (array == NULL || value == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
