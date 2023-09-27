#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: the matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int s1;
	int s2;

	i = 0;
	j = size - 1;
	s1 = 0;
	s2 = 0;

	while (i < size)
	{
		s1 += a[i][i];
		s2 += a[i][j];
		i++;
		j--;
	}

	printf("%d, %d\n", s1, s2);
}
