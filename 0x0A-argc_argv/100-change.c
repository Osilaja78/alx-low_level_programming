#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: arg count
 * @argv: arg vector
 *
 * Description: prints the min no. of coins to make change for an amount.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num, i;
	int num_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		num_coins += num / coins[i];
		num %= coins[i];
	}

	printf("%d\n", num_coins);
	return (0);
}
