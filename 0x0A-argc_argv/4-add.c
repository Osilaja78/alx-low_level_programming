#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vector
 *
 * Desription: Adds numbers
 *
 * Return Always 0.
 */
int main(int argc, char *argv[])
{
	int i, num;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num)
		{
			if (num > 0)
			{
				result = result + num;
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n" ,result);
	return (0);
}
