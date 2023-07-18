#include <stdio.h>

/**
 * print_last_digit - self explanatory.
 * @n: parameter.
 * Return: the last digit.
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n = n * (-1);
		i = n % 10;
		return (i);
	}
	else
	{
		i = n % 10;
		return (i);
	}
}
