#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string in reverse.
 * @s: parameter.
 */

void print_rev(char *s)
{
	int count, i;
	char a;

	count = _strlen(s);

	for (i = count; i >= 0; i--)
	{
		a = s[i];
		_putchar('a');
	}
	_putchar('\n');
}
