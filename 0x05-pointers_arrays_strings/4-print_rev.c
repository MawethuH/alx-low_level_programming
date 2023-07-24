#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string in reverse.
 * @s: parameter.
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len])
		len++;
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
