#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print diagonal line
 *@n: parameter
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		if (n == 1)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
		for (i = 1; i <= n; i++)
		{

			int j = 2;

			while (j < (i + 1) && i > 1)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
		}
	}
	else
		_putchar('\n');
}
