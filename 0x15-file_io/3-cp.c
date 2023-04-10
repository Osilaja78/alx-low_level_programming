#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int file_action(char *file_from, char *file_to);
void close_fd(int fd);
/**
 * main - Entry point.
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	n = file_action(argv[1], argv[2]);
	return (n);
}

/**
 * file_action - Main action.
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: int.
 */
int file_action(char *file_from, char *file_to)
{
	int fd_1, fd_2;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (file_from == NULL || file_to == NULL)
		return (-1);

	fd_1 = open(file_from, O_RDONLY);
	if (fd_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
		exit(98);
	}

	fd_2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to file %s\n", file_to);
		exit(99);
	}

	while ((bytes_read = read(fd_1, buffer, 1024)))
	{
		if (bytes_read == -1)
		{
			close_fd(fd_1);
			close_fd(fd_2);
			exit(98);
		}

		bytes_written = write(fd_2, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close_fd(fd_1);
			close_fd(fd_2);
			exit(98);
		}

		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: can't write to file %s\n", file_to);
		}
	}

	close_fd(fd_1);
	close_fd(fd_2);
	return (0);
}

/**
 * close_fd - close fd with erro.
 * @fd: file descriptor to close
 *
 * Return: nothing.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
