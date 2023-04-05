#include "lists.h"

/**
 * reverse_listint - A program that reverses the elements of a linked list
 * @head: A pointer to the head of the list
 *
 * Return: The pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = new;
	}

	*head = old;

	return (*head);
}
