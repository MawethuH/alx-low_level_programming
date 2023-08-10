#include <stdlib.h>
#include "main.h"

/**
 * _realloc - entry.
 * @ptr: input.
 * @old_size: input.
 * @new_size: input.
 * Return: pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	char *old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new = malloc(new_size);
	if (!new)
		return (NULL);

	old = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new[i] = old[i];
	}

	free(ptr);
	return (new);
}
