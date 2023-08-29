#include "lists.h"

/**
 * delete_nodeint_at_index - ...
 * @head: ...
 * @index: ...
 * Return: ...
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cpy = *head;
	unsigned int i;

	if (cpy == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (!cpy || cpy->next == NULL)
			return (-1);
		cpy = cpy->next;
	}

	tmp = cpy->next;
	cpy->next = tmp->next;
	free(tmp);
	return (1);
}
