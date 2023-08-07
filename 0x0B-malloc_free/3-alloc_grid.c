#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - entry point.
 * @width: input.
 * @height: input.
 * Return: int.
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		s[x] = malloc(sizeof(int) * width);
		if (s[x] == NULL)
		{
			for (; x >= 0; x--)
				free(s[x]);
			free(s);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y <= width; y++)
			s[x][y] = 0;
	}
	return (s);
}
