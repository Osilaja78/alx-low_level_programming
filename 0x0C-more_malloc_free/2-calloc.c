#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - Entry point.
 * @nmemb: number of elements in array.
 * @size: size of each elements in array.
 *
 * Description:  allocates memory for an array, using malloc.
 *
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;
	char *ptr_byte;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr_byte = (char *) ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		ptr_byte[i] = 0;
	}
	return (ptr);
}
