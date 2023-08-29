#include "lists.h"
#include <stdio.h>

/**
 * print_listint - entry.
 * @h: pointer.
 * Return: no. of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
