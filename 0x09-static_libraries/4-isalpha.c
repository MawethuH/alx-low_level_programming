#include <stdio.h>

/**
 * _isalpha - function that checks for letters.
 * @c: interger parameter.
 * Return: 1 Success 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
