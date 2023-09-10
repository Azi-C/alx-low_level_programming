#include <stdio.h>

/**
 * main - entry point
 * print all single digit numbers of base 10
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
