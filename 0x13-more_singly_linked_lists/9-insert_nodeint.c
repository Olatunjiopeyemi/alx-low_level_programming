#include "list.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node at
 * a given position
 * @head: A pointer to the head node
 * @idx: The index of the list where the new node will be
 * @n: content of the node
 * Return: The address of the new node or null if it doesnt exist
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned i;
	listint_t *temp, *New;

	*temp = *head;

	New = malloc(sizeof(listint_t));

	if (!head)
		return (NULL);
	if (!New)
		return (NULL);

	New->n = n;

	if (idx == 0)
	{
		New->next = *temp;
		*head = New;
		return (New);
	}

	i = 0;

	while (i < (idx - 1))
	{
		if (temp == NULL)
			return (NULL);
		if (temp->next == NULL)
			return (NULL);

		temp = temp->next;
		i++;
	}

	New->next = temp->next;
	temp->next = New;


	return (new);
}
