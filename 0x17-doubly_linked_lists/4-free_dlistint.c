#include "lists.h"

/**
 * free_dlistint - A function that frees a list
 * #head: the head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new = head;
	dlistint_t *prev = head;

	if (!head)
		return;
	while (new->next)
	{
		new = new->next;
		free(prev);
		prev = new;
	}
	free(new);
}
