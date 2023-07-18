#include <stdio.h>
#include "main.h"

/**
 * times_table - computes a times table.
 */

void times_table(void)
{
	int i, j, multiple;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			multiple = i * j;

			if (multiple <= 9)
				_putchar(' ');
			else
				_putchar((multiple / 10) + '0');
			_putchar((multiple % 10) + '0');
		}
		_putchar('\n');
	}
}
