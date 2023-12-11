#include <unistd.h>

/**
 * _putchar - print a character
 * @c: The character to print
 * Return: On success 1, -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
