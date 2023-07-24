#include <stdio.h>

/**
 * _strcpy - copies string.
 * @src: string to copy.
 * @dest: where to copy it to.
 * Return: pointer.
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = *dest;

	while (*src)
		*dest++ = *src++;
	return (tmp);
}
