#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"
#define SUCCESS 1
#define FAIL -1
/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: filename to append text to
 * @text_content: content to append to filename
 * Return: 1 if SUCCESS or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t writeCount = 0;

	if (filename == NULL)
		return (FAIL);
	if (text_content == NULL)
	{
		fd = open(filename, O_RDONLY | O_WRONLY);
		if (fd == FAIL)
			return (FAIL);

		close(fd);
		return (SUCCESS);
	}

	fd = open(filename, O_WRONLY | O_APPEND, 0664);
	if (fd == FAIL)
		return (FAIL);
	for (i = 0; text_content[i]; i++)
		;

	writeCount = write(fd, text_content, i);
	if (writeCount == FAIL)
		return (FAIL);
	close(fd);
	return (SUCCESS);
}
