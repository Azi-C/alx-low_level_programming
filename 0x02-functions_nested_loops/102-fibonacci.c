#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long sum = a + b;

	printf("%lu, %lu, ", a, b);
	for (i = 3; i <= 49; i++)
	{
	printf("%lu, ", sum);
		a = b;
		b = sum;
		sum = a + b;
	}
	printf("%lu\n", sum);
	return (0);
}
