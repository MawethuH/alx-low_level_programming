#include <stdio.h>

/**
 * swap_int - swaps two intergers
 * @a: interger parameter
 * @b: interger parameter
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
