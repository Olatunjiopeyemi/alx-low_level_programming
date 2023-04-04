#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end of a list
 * @head: The pointer to the beginning node
 * @n: The content to be inserted
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New;
	listint_t *temp = *head;

	New = malloc(sizeof(listint_t));

	if (!New)
		return (NULL);

	New->n = n;
	New->next = NULL;

	if (!*head)
	{
		*head = New;
		return (New);

	}
	while (temp->next)
		temp = temp->next;

	temp->next = New;

	return (New);
}

