#include <stdio.h>
#include "main.h"

/**
 * put2 - prints every other character.
 * @str: input string.
 */

void put2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != 0)
		len++;
	for (; i <= len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
