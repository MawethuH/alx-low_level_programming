#include "main.h"

/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 * Return: ...
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, n_of_bits = 0;
	unsigned long int c;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = excl >> i;
		if (c & 1)
			n_of_bits++;
	}

	return (n_of_bits);
}
