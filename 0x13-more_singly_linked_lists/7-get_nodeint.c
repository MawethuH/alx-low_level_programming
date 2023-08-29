#include "lists.h"

/**
 * get_nodeint_at_index - ...
 * @head: ...
 * @index: ...
 * Return: ...
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;

		i++;
	}
	return (head);
}
