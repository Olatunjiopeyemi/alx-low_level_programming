#include "lists.h"

/**
 * sum_dlistint - A function that sums up all the data in a list
 * @head: Pointer to first node
 * Return: Sum in the list.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *new = head;
	int sum = 0;

	if (!head)
		return (0);

	while (new)
	{
		sum += new->n;
		new = new->next;
	}

	return (sum);
}
