#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Entru point.
 * @separator: number separator
 * @n: number of integers
 *
 * Description: prints numbers.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (separator != NULL)
	{
		va_start(ptr, n);

		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(ptr, int));
			if (i != n)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}
	va_end(ptr);
}
