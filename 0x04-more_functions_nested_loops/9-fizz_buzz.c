#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This is a fizz buzz program'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 1;
	int j, k;

	while (i <= 100)
	{
		j = i % 3;
		k = i % 5;

		if ((j == 0) && (k == 0))
		{
			printf("FizzBuzz ");
		}
		else if (k == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if (j == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
