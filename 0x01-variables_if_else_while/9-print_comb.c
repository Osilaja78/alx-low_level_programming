#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints combination od no.s'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1 = 0;

	while (num1 <= 9)
	{
		putchar('0' + num1);
		if (num1 != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
