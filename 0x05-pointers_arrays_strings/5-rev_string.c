#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 */

void rev_string(char *s)
{
	int len, i;
	char tmp;

	len = 0;
	i = 0;

	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		tmp = s[i];
		s[i++] = s[len];
		s[len] = tmp;
	}
}
