#include "lists.h"
#include <stdio.h>

/**
 * listint_len - entry.
 * @h: str.
 * Return: len.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
