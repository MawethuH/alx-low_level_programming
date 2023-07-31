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
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
