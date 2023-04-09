#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);
/**
 * read_textfile - reads a text file.
 * @filename: name of file to read
 * @letters: no. of letters to read
 *
 * Return: no of letters read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t size;
	char *ch = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	size = read(fd, ch, letters);

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	close(fd);
	return (size);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
