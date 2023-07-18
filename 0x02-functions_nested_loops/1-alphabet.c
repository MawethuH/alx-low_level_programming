#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function that prints out alphabets in lower case
 * Return: nothing, there is not return value (void)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
_putchar('\n');
}
