#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define ERR97  "Usage: cp file_from file_to"
#define ERR98  "Error: Can't read from file "
#define ERR99  "Error: Can't write to "
#define ERR100 "Error: Can't close fd "
#define NUMBYTES 1204
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments passed to function
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int fd_dest, fd_source;
	int readCount = 1, writeCount = 0;
	char buffer[NUMBYTES] = { 0 };

	writeCount = writeCount;
	if (argc != 3)
		if (write(STDERR_FILENO, ERR97, 28) < 0)
			exit(97);
	fd_dest = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", ERR99, argv[2]);
		exit(99);
	}
	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", ERR98, argv[1]);
		exit(98);
	}
	while (readCount > 0)
	{
		readCount = read(fd_source, buffer, NUMBYTES);
		if (readCount == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", ERR98, argv[1]);
			exit(98);
		}
		writeCount = write(fd_dest, buffer, readCount);
		if (writeCount == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", ERR99, argv[2]);
			exit(99);
		}
	}
	if (close(fd_dest) != 0)
		dprintf(STDERR_FILENO, "%s%d\n", ERR100, fd_dest);
	if (close(fd_source) != 0)
		dprintf(STDERR_FILENO, "%s%d\n", ERR100, fd_source);
	return (0);
}
