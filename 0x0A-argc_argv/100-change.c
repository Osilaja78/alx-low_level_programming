#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: arg count
 * @argv: arg vector
 *
 * Description: prints the minimum number of coins to make change for an amount of money.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		if (num > 25)
		{
			printf("%d\n", (num / 25) + (num % 25));
		}
		else if (num > 10)
		{
			printf("%d\n", (num / 10) + (num % 10));
		}
		else if (num > 5)
		{
			printf("%d\n", (num / 5) + (num % 5));
		}
		else if (num > 2)
		{
			printf("%d\n", (num / 2) + (num % 2));
		}
		else
		{
			printf("1\n");
		}
	}
	return (0);
}
