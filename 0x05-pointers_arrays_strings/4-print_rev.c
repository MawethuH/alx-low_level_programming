#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string in reverse.
 * @s: parameter.
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len)
	{
		if (s[len] != '\0')
		{
			_putchar(s[len--]);
		}
	}
	_putchar('\n');
}
