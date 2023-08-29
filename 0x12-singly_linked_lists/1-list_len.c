#include "lists.h"

/**
 * list_len - entry.
 * @h: list.
 * Return: len.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
