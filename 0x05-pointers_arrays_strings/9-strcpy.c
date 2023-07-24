#include <stdio.h>

/**
 * _strcpy - copies string.
 * @src: string to copy.
 * @dest: where to copy it to.
 * Return: pointer.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
