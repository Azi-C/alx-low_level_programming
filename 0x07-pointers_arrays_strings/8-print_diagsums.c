#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals of a square matrix
 * @a: the input matrix
 * @size: the size of the matrix
 */

void print_diagsums(int *a, int size)
{

	int diagonal = 0;
	int anti_diagonal = 0;
	int i;

	for (i = 0; i < size; i++)
		diagonal += a[(i * size) + i];

	for (i = 1; i <= size; i++)
		anti_diagonal += a[(i * size) - i];

	printf("%d, %d\n", diagonal, anti_diagonal);
}
