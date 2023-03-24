#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Entry point.
 * @format:  fkrmat to print.
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	char c, *s, *sep = ", ";
	float f;
	int i, j = 0, k = 0;

	va_start(ptr, format);

	while (format && format[k])
		k++;

	while (format && format[j])
	{
		if (j == (k - 1))
			sep = "";

		switch (format[j])
		{
			case 'c':
				c = (char) va_arg(ptr, int);
				printf("%c%s", c, sep);
				break;
			case 'i':
				i = va_arg(ptr, int);
				printf("%d%s", i, sep);
				break;
			case 'f':
				f = (float) va_arg(ptr, double);
				printf("%f%s", f, sep);
				break;
			case 's':
				s = va_arg(ptr, char *);
				if (s == NULL)
				{
					printf("(nil)%s", sep);
					break;
				}
				printf("%s%s", s, sep);
				break;
		}
		j++;
	}
	printf("\n");
	va_end(ptr);
}
