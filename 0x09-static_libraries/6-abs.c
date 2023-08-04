#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value.
 * @i: parameter.
 * Return: the absolute value.
 */

int _abs(int i)
{
	int j;

	if (i < 0)
	{
		j = i * (-1);
		return (j);
	}
	else
		return (i);
}
