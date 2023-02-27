#include "main.h"

/**
 * swap_int - Entry point
 * @a: variable 1
 * @b: variable 2
 *
 * Description: Swaps two variables
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
