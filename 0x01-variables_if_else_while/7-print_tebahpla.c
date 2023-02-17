#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints reversed alphabets'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
