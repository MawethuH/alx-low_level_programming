#include "main.h"

/**
 * factorial - Entry point.
 * @n: input.
 * Return: factorial or -1.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
