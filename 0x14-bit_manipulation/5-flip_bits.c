#include "main.h"

/**
 * flip_bits - Checks the number of bits needed to get same noumbers.
 * @n: first number
 * @m: second number
 *
 * Return: count of flipped bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r;
	unsigned int count = 0;

	r = n ^ m;

	while (r != 0)
	{
		if (r & 1)
			count++;
		r >>= 1;
	}
	return (count);
}
