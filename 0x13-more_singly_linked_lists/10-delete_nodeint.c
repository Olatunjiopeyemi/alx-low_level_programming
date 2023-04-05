#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node
 * at an index of a list
 * @head: The pointer to the head of the list
 *
 * @index: The index of the node that should be deleted
 * Return: 1 == successful and -1 == failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t newnode = NULL;
	listint_t *temp = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}


	for (i = 0; i < (index - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	newnode = temp->next;
	temp->next = newnode->next;
	free(newnode);

	return (1);
}
