#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point.
 * @n: first argument
 *
 * Description: sums up all its parameters.
 *
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	return (sum);
}
