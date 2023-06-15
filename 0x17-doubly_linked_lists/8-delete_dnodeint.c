#include "lists.h"

/**
 * delete_dnodeint_at_index - A function that deletes a node in a list
 * @head: Address of pointer to first node
 * @index: where node to be deleted
 * Return: 1 or -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		new = new->next;
		free(*head);
		new ? new->prev = NULL : NULL;
		*head = new;
		return (1);
	}

	while (new)
	{
		if (i == index)
		{
			new->prev->next = new->next;
			if (new->next)
				new->next->prev = new->prev;
			free(new);
			return (1);
		}

		new = new->next;
		i++;
	}

	return (-1);
}
