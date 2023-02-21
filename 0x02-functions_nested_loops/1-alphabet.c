#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'This program prints alphabets'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

char print_alphabet()
{
	char start = 'a';

	while(start <= 'z')
	{
		_putchar(start);
		_putchar('\n');
		start++;
	}
	return (0);
}
