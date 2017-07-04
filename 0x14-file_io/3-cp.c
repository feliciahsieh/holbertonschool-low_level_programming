#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define ERR97  "Usage: cp file_from file_to\n"
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
	int fd_d, fd_s, readCount = NUMBYTES, writeCount = 0;
	char buffer[NUMBYTES] = { 0 };

	if (argc != 3)
	{
		write(STDERR_FILENO, ERR97, 28);
		exit(97);
	}
	fd_d = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd_d == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", ERR99, argv[2]);
		exit(99);
	}
	fd_s = open(argv[1], O_RDONLY);
	if (fd_s == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", ERR98, argv[1]);
		exit(98);
	}
	while (readCount == NUMBYTES)
	{
		readCount = read(fd_s, buffer, NUMBYTES);
		if (readCount == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", ERR98, argv[1]);
			exit(98);
		}
		writeCount = write(fd_d, buffer, readCount);
		if (writeCount == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", ERR99, argv[2]);
			exit(99);
		}
	}
	if (close(fd_d) != 0)
		dprintf(STDERR_FILENO, "%s%d\n", ERR100, fd_d);
	if (close(fd_s) != 0)
		dprintf(STDERR_FILENO, "%s%d\n", ERR100, fd_s);
	return (0);
}
