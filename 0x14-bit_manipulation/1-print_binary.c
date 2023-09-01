#include "main.h"

/**
 * print_binary - ...
 * @n: ...
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int j, i = 0;

	j = 63;
	while (j >= 0)
	{
		num = n >> j;
		if (num & 1)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');

		j--;
	}
	if (!i)
		_putchar('0');
}
