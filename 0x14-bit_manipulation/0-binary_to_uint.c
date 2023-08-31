#include "main.h"

/**
 * binary_to_uint - ...
 * @b: ...
 * Return: ...
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, base = 1, l = 0;

	if (b == NULL)
		return (0);
	while (b[l])
		l++;

	while (l)
	{
		if (b[l - 1] != '0' && b[l - 1] != '1')
			return (0);
		if (b[l - 1] == '1')
			sum += base;
		base *= 2;
	}
	return (sum);
}

