#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times.
 * Return: nothing, there is no return value.
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
