#include "main.h"

/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 * Return: ...
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, num;
	int j, i = 0;

	j = 63;
	while (j >= 0)
	{
		num = xor >> j;
		if (num & 1)
			i++;
		j--;
	}
	return (i);
}
