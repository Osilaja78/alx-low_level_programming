#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: prints the number of argument passed.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	(void) argv;

	if (argc > 1)
	{	
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("0");
	return (0);
}
