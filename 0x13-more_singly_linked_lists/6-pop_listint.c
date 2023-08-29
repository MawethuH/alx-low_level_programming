#include "lists.h"

/**
 * pop_listint - ...
 * @head: ...
 * Return: int.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (*head == NULL)
		return (0);

	tmp = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (num);
}
