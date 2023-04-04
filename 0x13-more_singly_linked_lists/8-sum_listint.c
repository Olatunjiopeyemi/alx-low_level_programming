#include "lists.h"

/**
 * sum_listint - A  function that returns the sum of all the data (n) of a list
 * @head: pointer to the head
 * Return: The sum or 0 if there is no list
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp = head;

	if (!temp)
		return (0);

	sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);

}
