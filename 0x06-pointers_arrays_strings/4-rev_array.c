#include "main.h"

/**
 * reverse_array - Entry point
 * @a: the array to be reversed
 * @n: the number of elements in a
 *
 * Description: reverses the contents of an array
 *
 * Returun: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
