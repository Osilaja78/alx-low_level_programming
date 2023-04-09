#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets bit at a particular index.
 * @n: number to modify
 * @index: index to set
 *
 * Return: 1 (success) or -1 (failed).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;
	unsigned long int r;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bit <<= index;

	r = *n | bit;

	return (r);
}
