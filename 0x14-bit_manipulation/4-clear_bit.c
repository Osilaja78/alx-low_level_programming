#include "main.h"
#include <stdio.h>

/**
 * clear_bit - clears a particulsr bit at index.
 * @n: number
 * @index: index to clear.
 *
 * Return: 1 on success or -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1, bit_compliment;
	unsigned long int r;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bit <<= index;
	bit_compliment = ~bit;
	r = *n & bit_compliment;
	*n = r;
	return (1);
}
