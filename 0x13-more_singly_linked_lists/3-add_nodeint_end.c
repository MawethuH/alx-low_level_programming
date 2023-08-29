#include "lists.h"

/**
 * add_nodeint_end - ...
 * @head: ...
 * @n: ...
 * Return: ...
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added, *end;

	added = malloc(sizeof(listint_t));
	if (!added)
	{
		return (NULL);
	}

	added->n = n;
	added->next = NULL;
	if (*head == NULL)
		*head = added;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = added;
	}
	return (*head);
}
