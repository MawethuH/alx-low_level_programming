#include "lists.h"

/**
 * print_list - entry.
 * @h: list.
 * Return: no. of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t n_of_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
		n_of_nodes++;
	}
	return (n_of_nodes);
}
