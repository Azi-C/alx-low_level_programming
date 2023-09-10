#include <stdio.h>

/**
 * main - entry point
 * print all combinations of three different digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;
	int d;
	int u;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = (c + 1); d <= '9'; d++)
		{
			for (u = (d + 1); u <= '9'; u++)
			{
				putchar(c);
				putchar(d);
				putchar(u);
				if (c != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
