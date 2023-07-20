#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints triangles
 * @size: parameter
 */

void print_triangle(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			int j = i;

			while (j >= 1)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
