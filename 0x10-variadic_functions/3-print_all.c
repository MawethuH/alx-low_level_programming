#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void _c(va_list arg);
void _i(va_list arg);
void _f(va_list arg);
void _s(va_list arg);
void print_all(const char * const format, ...);

/**
 * _c - ...
 * @arg: ...
 */

void _c(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * _i - ...
 * @arg: ...
 */

void _i(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

/**
 * _f - ...
 * @arg: ...
 */

void _f(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * _s - ...
 * @arg: ...
 */

void _s(va_list arg)
{
	char *ptr;

	ptr = va_arg(arg, char *);

	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ptr);
}

/**
 * print_all - ...
 * @format: ...
 * @...: ...
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *separator = "";
	printer_t func[] = {
		{"c", _c},
		{"i", _i},
		{"f", _f},
		{"s", _s}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(func[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			func[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
