#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a list
 * @head: A pointer to the head node
 * Return: The head node’s data (n) or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;


	if (!head)
		return (0);

	if (!*head)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
