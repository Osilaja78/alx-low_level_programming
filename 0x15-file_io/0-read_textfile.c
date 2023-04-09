#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	FILE *fd;
	ssize_t size, bytes_written;
	char *ch;

	if (filename == NULL)
		return (0);

	fd = fopen(filename, "r");
	if (fd == NULL)
		return (0);

	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
	{
		fclose(fd);
		return (0);
	}

	size = fread(ch, sizeof(char), letters, fd);

	if (size < 0)
	{
		free(ch);
		fclose(fd);
		return (0);
	}

	bytes_written = fwrite(ch, sizeof(char), size, stdout);

	if (bytes_written < size)
	{
		free(ch);
		fclose(fd);
		return (0);
	}

	free(ch);
	fclose(fd);
	return (size);
}
