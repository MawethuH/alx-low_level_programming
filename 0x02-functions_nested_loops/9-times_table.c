#include <stdio.h>
#include "main.h"

/**
 * times_table - computes a times table.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multiple = i * j;
			_putchar(multiple + '0');
			_putchar(',);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
