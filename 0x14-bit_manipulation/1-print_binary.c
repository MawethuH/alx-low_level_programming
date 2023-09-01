#unclude "main.h"

/**
 * print_binary - ...
 * @n: ...
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int j, i = 0;

	for (j = 63; j >= 0; j--)
	{
		num = n >> j;
		if (num & 1)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}
