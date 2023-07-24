#include <stdio.h>
#include "main.h"

/**
 * _puts - prints out a string.
 * @str: string to output.
 */

void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		_puchar('str[count]');
	}
}
