#include "main.h"

/**
 * main - prints the largest prime factor of 612852475143
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long div = 2;

	while (div <= n / 2)
	{
		if (n % div != 0)
			div++;
		else
			n = n / div;
	}
	printf("%lu\n", n);
	return (0);
}
