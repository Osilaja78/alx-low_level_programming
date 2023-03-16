#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - Entry point.
 * @ptr: pointer
 * @old_size: old size allocated
 * @new_size: new size to allocate
 *
 * Description: works like realloc.
 *
 * Return: pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
