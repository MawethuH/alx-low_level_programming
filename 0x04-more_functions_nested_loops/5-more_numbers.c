#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
			_putchar('1');

		_putchar((i % 10) + '0');
	}
	_putchar('\n');
	}
}

