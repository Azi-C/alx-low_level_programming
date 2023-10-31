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
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the string to add at the end of the file
 * Return: 1 on success, -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
