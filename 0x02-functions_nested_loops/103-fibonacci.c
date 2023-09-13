#include <stdio.h>

/**
 * main - prints the sum of even terms in Fibonacci sequence up to 4,000,000
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long f;
	unsigned long sum = 2;

	while (b < 4000000)
	{
		f = a + b;
		a = b;
		b = f;
		if ((b <= 4000000) && (b % 2 == 0))
			sum += b;
	}
	printf("%lu\n", sum);
	return (0);
}
