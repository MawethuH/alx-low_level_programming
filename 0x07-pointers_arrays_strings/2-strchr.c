#include "main.h"

/**
 * _strchr - locates a character.
 * @s: string.
 * @c: character being searched.
 * Return: character.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
