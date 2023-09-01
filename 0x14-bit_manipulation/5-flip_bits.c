#include "main.h"

/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 * Return: ...
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m, count = 0;

	while (exlusive > 0)
	{
		count += (exclusive & 1);
		exlusive >>= 1;
	}
	return (count);
}
