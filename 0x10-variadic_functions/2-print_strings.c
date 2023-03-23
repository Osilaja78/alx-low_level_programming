#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Entry point.
 * @separator: separator
 * @n: no. of arguments
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 1; i <= n; i++)
	{
		printf("%s", va_arg(ptr, char*));
		if (separator != NULL)
		{
			if (i != n)
				printf("%s", separator);
		}
	}
	printf("\n");
}
