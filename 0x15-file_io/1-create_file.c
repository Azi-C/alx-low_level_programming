#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: input string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	if (*s)
		return (_strlen(s + 1) + 1);
	return (0);
}

/**
 * create_file - function that creates a file with the permissions 600
 * if the file exists, it doesnot change the permissions, just truncate it
 * @filename: the name of the file created
 * @text_content: string to write to the file
 * Return: 1 on success, -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int w;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	w = write(fd, text_content, len);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
