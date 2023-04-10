#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t get_len(char *text);
/**
 * create_file - Creates a file.
 * @filename: name of file to create
 * @text_content: content to add to file
 *
 * Return: 1 , -1 in failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = get_len(text_content);
		bytes_written = write(fd, text_content, len);
		if (bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

/**
 * get_len - gets the length of text to write.
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
