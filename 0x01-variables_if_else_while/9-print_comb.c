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
	int num2;

	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			putchar('0' + num1);
			putchar('0' + num2);
			putchar(',');
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
