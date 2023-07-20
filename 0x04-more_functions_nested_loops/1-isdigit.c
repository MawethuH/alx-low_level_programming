#include <stdio.h>

/**
 * _isdigit - checks for digits
 * @c: parameter
 * Return: 1 Success, else 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
