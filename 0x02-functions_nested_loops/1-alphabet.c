#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase
 *
 * Description: 'This program prints alphabets'
 *
 * Return: Always 0 (success)
 */
char print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
	return (0);
}
