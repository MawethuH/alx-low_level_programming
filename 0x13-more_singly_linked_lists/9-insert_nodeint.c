#include "lists.h"

/**
 * insert_nodeint_at_index - ...
 * @head: ...
 * @idx: ...
 * @n: ...
 * Return: ...
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert, *tmp = *head;
	unsigned int i;

	insert = malloc(sizeof(listint_t));
	if (insert == NULL)
		return (NULL);

	insert->n = n;
	if (idx == 0)
	{
		insert->next = tmp;
		*head = insert;
		return (insert);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	insert->next = tmp->next;
	tmp->next = insert;
	return (insert);
}
