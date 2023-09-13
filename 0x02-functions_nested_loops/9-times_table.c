#include "main.h"

/**
 * times_table- function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	
	while (i < 11)
	{
		while (j < 11)
		{
			_putchar(i*j+','+'\t');
			j++;
		}
		i++;
		_putchar('\n');
	}

