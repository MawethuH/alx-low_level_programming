#include <stdlib.h>
#include "main.h"

/**
 * _strdup - entry point.
 * @str: input.
 * Return: pointer.
 */

char *_strdup(char *str)
{
	char *p = (char)malloc(sizeof(char) * sizeof(str));

	p = str;
	return (p);
}
