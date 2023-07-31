#include "main.h"

/**
 * _strpbrk - entry point.
 * @s: input.
 * @accept: input.
 * Return: Always 0 (Success).
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*S)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
