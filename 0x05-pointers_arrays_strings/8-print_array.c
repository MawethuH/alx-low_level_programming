#include <stdio.h>

/**
 * print_array - prints n terms of an array.
 * @a: array.
 * @n: number of arrays.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
	printf("\n");
}
