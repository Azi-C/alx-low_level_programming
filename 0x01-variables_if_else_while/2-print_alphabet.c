#include <stdio.h>

/**
 * main - entry point
 * print the alphabet in lowercase a-z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
