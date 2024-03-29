#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int result;
	int (*operation)(int, int);
	int a;
	int b;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}
	operation = get_op_func(operator);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = operation(a, b);

	printf("%d\n", result);
	return (0);
}
