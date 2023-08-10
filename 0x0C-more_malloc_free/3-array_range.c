#include "main.h"
#include <stdlib.h>

/**
 * array_range - entry.
 * @min: input.
 * @max: input.
 * Return: pointer.
 */

int *array_range(int min, int max)
{
	int *array, i = 0;

	if (min > max)
		return (NULL);

	array = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}

	return (array);
}
