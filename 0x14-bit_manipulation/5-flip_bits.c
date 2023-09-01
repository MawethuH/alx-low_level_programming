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

	for (j = 63; j >= 0; j--)
	{
		num = xor >> j;
		if (num & 1)
			i++;
	}
	return (i);
}
