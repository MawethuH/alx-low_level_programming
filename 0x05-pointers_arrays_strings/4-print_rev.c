#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string in reverse.
 * @s: parameter.
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}
