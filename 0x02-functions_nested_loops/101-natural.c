#include <stdio.h>

/**
 * main - prints the sum of multiples of 3 or 5 below 1024 excluded
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%i\n", sum);
	return (0);
}
