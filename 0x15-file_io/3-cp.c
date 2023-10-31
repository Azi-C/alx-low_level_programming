#include "main.h"

#define BYTE 1024

/**
 * _close - function that closes files descriptors
 * @fd1: first file descriptor
 * @fd2: second file descriptor
 */

void _close(int fd1, int fd2)
{
	int p = close(fd1);

	if (p == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	p = close(fd2);
	if (p == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
}

/**
 * main - function that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 Always (success)
 */

int main(int argc, char **argv)
{
	int fd1, fd2;
	int r, w;
	char buffer[BYTE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		r = read(fd1, buffer, BYTE);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(fd2, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (r == BYTE);

	_close(fd1, fd2);

	return (0);
}
