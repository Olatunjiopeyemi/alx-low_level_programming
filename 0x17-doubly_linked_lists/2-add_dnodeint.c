#include "lists.h"

/**
 * add_dnodeint - A function that adds a node at the beginning of a list
 * @head: the head of the node
 * @n: the new node
 * Return:  the address of the new element, or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
