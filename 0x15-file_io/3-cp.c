#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Entry point.
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: int.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
}

int file_action(char *file_from, char *file_to)
{
	int fd_1, fd_2;
	char *buffer;

	if (file_from == NULL || file_to == NULL)
		return (-1);
}
