#include "main.h"

/**
 * _strlen_recursion - entry.
 * @s: input.
 * Return: length.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - entry.
 * @s: input.
 * @n1: input.
 * @n2: input.
 * Return: int.
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palidrome - entry.
 * @s: input.
 * Return: int.
 */

int is_palidrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
