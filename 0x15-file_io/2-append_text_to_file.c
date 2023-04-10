#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t get_len(char *text);
/**
 * append_text_to_file - Entry point.
 * @filename: filename to append to
 * @text_content: text to append to file
 *
 * Return: 1, of -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = get_len(text_content);
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

/**
 * get_len - Counts the length of a text.
 * @text: text to count
 *
 * Return: count of text.
 */
ssize_t get_len(char *text)
{
	ssize_t count = 0;

	while (*text)
	{
		count++;
		text++;
	}
	return (count);
}
