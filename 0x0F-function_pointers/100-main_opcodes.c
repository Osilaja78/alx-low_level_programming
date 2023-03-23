#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int no_of_bytes, i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	no_of_bytes = atoi(argv[1]);

	if (no_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (unsigned char*)main;

	for (i = 0; i < no_of_bytes; i++)
	{
		printf("%02x", *(ptr + i));
	}
	printf("\n");

	return (0);
}
