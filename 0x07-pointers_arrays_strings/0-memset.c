#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer.
 * @b: constant byte.
 * @n: number of memory bytes.
 * Return: pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (*s);
}
