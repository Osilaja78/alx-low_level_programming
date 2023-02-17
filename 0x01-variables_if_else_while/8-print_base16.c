#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints hex numbers'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int hex = 0;

	while (hex <= 16)
	{
		if (hex < 10)
		{
			putchar('0' + hex);
			hex++;
		}
		else
		{
			putchar('a' + (hex - 10));
			hex++;
		}
	}
	putchar('\n');
	return (0);
}
