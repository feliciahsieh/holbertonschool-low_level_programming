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
	ssize_t count = 0;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0400);
	if (fd == -1)
	{
		printf("Failed to create and open the file\n");
		exit(1);
	}

	count = read(fd, buffer, letters);
	buffer[letters] = '\0';

	write(STDOUT_FILENO, buffer, letters + 1);

	close(fd);

	free(buffer);

	return (count);
}
