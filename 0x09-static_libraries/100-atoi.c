#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to interger.
 * @s: string.
 * Return: interger.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			total = (total * 10) + (*s - '0');
		}
		else if (null_flag)
			break;
		s++;
	}
	if (sign < 0)
		total = -total;
	return (total);
}
