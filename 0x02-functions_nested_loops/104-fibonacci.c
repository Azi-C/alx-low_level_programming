#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long f = 0;
	unsigned long c = 1000000000;
	unsigned long a1, a2, b1, b2;

	printf("%lu", a);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", b);
		f = a + b;
		a = b;
		b = f;
	}

	a1 = a / c;
	a2 = a % c;
	b1 = b / c;
	b2 = b % c;

	for (i = 92; i < 99; i++)
	{
		printf(", %lu%lu", b1 + (b2 / c), b2 % c);

		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
	}
	printf("\n");
	return (0);
}
