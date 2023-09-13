#include "main.h"

/**
 * print_to_98-function that prints all natural numbers from n to 98
 *
 * @n : integer input
 */

void print_to_98(int n){
	
	while ( n <= 98)
	{
		_putchar('0'+n);
		
		if (n != 98)
		{
			_putchar(',');
			_putchar('\t');
		}

		n++;
		_putchar('\n');
	}
}
