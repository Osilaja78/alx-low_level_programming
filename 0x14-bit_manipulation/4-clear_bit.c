#include "main.h"
#include <stdio.h>

/**
 * clear_bit - clears a particulsr bit at index.
 * @n: number
 * @index: index to clear.
 *
 * Return: 1 on success or -1 if failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1, bit_comp;
	unsigned long int r;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bit <<= index;
	bit_comp = ~bit;
	r = *n & bit_comp;
	*n = r;
	return (1);
}
