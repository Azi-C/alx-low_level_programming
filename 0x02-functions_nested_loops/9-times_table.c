#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int b;
	int m;
	int p;

	for (b = 0; b <= 9; b++)
	{
		for (m = 0; m <= 9; m++)
		{
			p = (b * m);
			if (m == 0)
				_putchar('0');
			else if (p <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + p);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 10));
			}
		}
		_putchar('\n');
	}
}

