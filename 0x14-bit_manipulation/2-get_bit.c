#include "main.h"

/**
 * get_bit - ...
 * @n: ...
 * @index: ...
 * Return: ...
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int v_at_index;

	if (index > 63)
		return (-1);

	v_at_index = (n >> index) & 1;
	return (v_at_index);
}
