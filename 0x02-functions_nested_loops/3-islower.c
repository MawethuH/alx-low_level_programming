#include <stdio.h>

/**
 * _isLower - checks for lower case.
 * @c: interger parameter.
 * Return: 1 Success and 0 otherwise.
 */

int _isLower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
