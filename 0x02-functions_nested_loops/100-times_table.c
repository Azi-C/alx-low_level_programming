#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: input integer
 */

void print_times_table(int n)
{
	int b;
	int m;
	int p;

	if (n >= 0 && n <= 15)
	{
		for (b = 0; b <= n; b++)
		{
			for (m = 0; m <= n; m++)
			{
				p = (b * m);
				if (m == 0)
					_putchar('0');
				else
				{
					_putchar(',');
					_putchar(' ');
					if (p <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + p);
					}
					else if (p > 9 && p < 100)
					{
						_putchar(' ');
						_putchar('0' + (p / 10));
						_putchar('0' + (p % 10));
					}
					else
					{
						_putchar('0' + (p / 100));
						_putchar('0' + ((p / 10) % 10));
						_putchar('0' + (p % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
