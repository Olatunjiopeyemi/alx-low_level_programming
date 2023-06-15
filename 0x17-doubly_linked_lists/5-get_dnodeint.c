#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node of list
 * @head: The head node
 * @index: where the node is
 * Return: Node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new = head;
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; new; i++)
	{
		if (i == index)
			return (new);
		new = new->next;
	}

	return (NULL);
}
