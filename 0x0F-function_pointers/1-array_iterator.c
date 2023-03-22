#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Entry point.
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to a function
 *
 * Description: calls a function on each elementof array.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
