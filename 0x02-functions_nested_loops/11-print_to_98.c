#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers.
 * @n: parameter.
 */
void print_to_98(int n)
{
	int i = n;

	while (i <= 98)
	{
		if (i != 98)
		{
			printf("%d", i);
			printf(",");
			printf(" ");
		}

		else
			printf("%d", i);

		i++;
	}
}
