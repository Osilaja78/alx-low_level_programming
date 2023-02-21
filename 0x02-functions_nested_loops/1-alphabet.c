#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'This program prints alphabets'
 *
 * Return: Always 0 (success)
 */
char print_alphabet()
{
	char start = 'a';

	while(start <= 'z')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
	return (0);
}
