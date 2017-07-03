#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename to read text
 * @letters: size of buffer to store text
 * Return: size of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readCount = 0, writeCount = 0;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		printf("Failed to create and open the file\n");
		free(buffer);
		return (0);
	}
	readCount = read(fd, buffer, letters);
	if (readCount == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[letters] = '\0';
	writeCount = write(STDOUT_FILENO, buffer, readCount);
	if (writeCount == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	free(buffer);
	if (readCount == writeCount)
		return (writeCount);
	else
		return (0);
}
