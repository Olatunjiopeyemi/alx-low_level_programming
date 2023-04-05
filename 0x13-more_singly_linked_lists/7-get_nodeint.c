#include "lists.h"

/**
 * get_nodeint_at_index - A  function that returns the nth nodest
 * @head: A pointer to the head node
 * @index: Its the index of the node starting from 0
 * Return: The nth node of a list and NULL if the node doesnt e
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
