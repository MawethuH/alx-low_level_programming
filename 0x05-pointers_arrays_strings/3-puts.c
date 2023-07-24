#include <stdio.h>
#include "main.h"

/**
 * _puts - prints out a string.
 * @str: string to output.
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
