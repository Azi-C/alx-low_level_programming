#include <stdio.h>

/**
 * main - entry point
 * print all combinations of two-two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int	a = 0;
	int	b = 1;

	while (a <= 99)
	{
		while (b <= 99)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			if (a != 98)
			{
				putchar(',');
				putchar(' ');
			}
			b++;

