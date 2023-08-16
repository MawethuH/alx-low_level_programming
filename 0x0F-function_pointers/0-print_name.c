#include "function_pointers_h"
#include <stdio.h>

/**
 * print_name - entry.
 * @name: parameter.
 * @f: parameter.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
