#include <stdio.h>

/**
 * print_last_digit - self explanatory.
 * @n: parameter.
 * Return: the last digit.
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i *= (-1);

	_putchar(i + '0');
	return (i);
}
