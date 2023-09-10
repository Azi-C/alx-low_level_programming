#include <stdio.h>

/**
 * main - entry point
 * print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		if (c < '9')
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
