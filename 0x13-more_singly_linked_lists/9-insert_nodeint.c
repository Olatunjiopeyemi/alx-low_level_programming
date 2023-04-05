#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node at
 * a given position
 * @head: A pointer to the head node
 * @idx: The index of the list where the new node will be
 * @n: content of the new node
 * Return: The address to the new node or NULL if no list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *New;
	listint_t *temp = *head;
	unsigned int i;

	New = malloc(sizeof(listint_t));
	if (!head || !New)
		return (NULL);

	New->n = n;

	if (idx == 0)
	{
		New->next = temp;
		*head = New;
		return (New);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	New->next = temp->next;
	temp->next = New;


	return (New);
}
