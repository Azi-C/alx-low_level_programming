#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 * @n: the given number;
 * @m: another number;
 * Return:  number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned count = 0;
	unsigned long int i = n ^ m;

	while (i)
	{
		if ((i & 1) != 0)
			count++;
		i >>= 1;
	}

	return (count);
}
