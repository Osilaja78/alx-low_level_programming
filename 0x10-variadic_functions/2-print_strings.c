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
	char *temp;

	va_start(ptr, n);

	for (i = 1; i <= n; i++)
	{
		temp = va_arg(ptr, char*);

		printf("%s", temp == NULL ? "(nil)" : temp);
		if (separator != NULL && i != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
