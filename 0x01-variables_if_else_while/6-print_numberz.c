#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints numbers using putchar'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(48 + num);
		num++;
	}
	putchar('\n');
	return (0);
}
