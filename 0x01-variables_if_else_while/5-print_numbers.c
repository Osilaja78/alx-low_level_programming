#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints 0-9'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
