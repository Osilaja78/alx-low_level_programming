#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int cal_len(const char *a);

/**
 * binary_to_uint - converts binary to unsigned int.
 * @b: string of binary to convert
 *
 * Return: converted number, or 0 if failed.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, bit = 1;
	int i, len;

	if (b == NULL)
		return (0);

	len = cal_len(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			sum += bit;
		}
		else if (b[i] != '0')
		{
			return (0);
		}

		bit <<= 1;
	}
	return (sum);
}

/**
 * cal_len - count length of a number.
 * @a: number
 *
 * Return: int.
 */
int cal_len(const char *a)
{
	int count = 0;

	while (*a)
	{
		count++;
		a++;
	}
	return (count);
}
