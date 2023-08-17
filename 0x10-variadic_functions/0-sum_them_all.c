#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - ...
 * @n: ...
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list args;
	int i, sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
