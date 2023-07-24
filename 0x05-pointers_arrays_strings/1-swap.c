#include <stdio.h>

/**
 * swap_int - swaps two intergers
 * @a: interger parameter
 * @b: interger parameter
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
