#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'This program prints alphabets 10 times'
 *
 * Return: Always 0 (success)
 */
char print_alphabet_x10(void)
{
	char start;
	int i = 0;

	while (i < 10)
	{
		start = 'a';

		while (start <= 'z')
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
