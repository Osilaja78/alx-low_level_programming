#include <stdio.h>

/**
 * main - Entry piont
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: prints name of program using argv.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		return (0);
	}
	return (0);
}
