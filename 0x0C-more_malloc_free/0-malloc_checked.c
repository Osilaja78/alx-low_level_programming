#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - Entry point
 * @b: size of mem to allocate
 *
 * Description: This function allocates memory using malloc.
 *
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
