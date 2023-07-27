#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Copies n bytes of src string.
 * @dest: destination.
 * @src: source string.
 * @n: number of characters.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
