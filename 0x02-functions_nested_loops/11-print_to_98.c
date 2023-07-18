#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers.
 * @n: parameter.
 */
void print_to_98(int n)
{
	int i;

	i = n;

	if (i > 98)
	{
		i = n;

		while (i > 98)
		{
			printf("%d", i);
			printf(",");
			printf(" ");

			i--;
		}
	}

	else if (i < 98)
	{
		i = n;

		while (i < 98)
		{
			printf("%d", i);
			printf(",");
			printf(" ");
			i++;
		}
	}

	else
	{
		printf("%d", i);
	}
	printf("\n");

}
