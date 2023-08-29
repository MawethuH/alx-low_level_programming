#include "lists.h"

/**
 *add_nodeint - entry.
 *@head: input.
 *@n: input.
 *Return: head.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added;

	added = malloc(sizeof(listint_t));
	if (added == NULL)
		return (NULL);
	added->n = n;
	added->next = *head;
	*head = added;
	return (added);
}
