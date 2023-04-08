#include "main.h"
#include <stdio.h>

/**
 * get_bit - Entry point.
 * @n: number to get index of
 * @index: index to get
 *
 * Return: value of the index or -1 if faled.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 1;

	bit <<= index;

	return ((n & bit) != 0);
}
