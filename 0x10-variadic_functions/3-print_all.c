#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - ...
 * @format: ...
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list list;

	va_start(list, format);
	while (formart == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
				case 'c':
					printf("%c", va_arg(list, int));
					break;
				case 'i':
					printf("%d", va_arg(list, int));
					break;
				case 'f':
					printf("%f", va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (str != NULL)
					{
						printf("%s", str);
						break;
					}
					printf("(nil)");
					break;
		}
	if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
		printf(", ");
	i++;
	}
	va_end(list);
	printf("\n");
}
