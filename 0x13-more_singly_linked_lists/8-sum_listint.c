#include "lists.h"

/**
 * sum_listint - ...
 * @head: ...
 * Return: ...
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
