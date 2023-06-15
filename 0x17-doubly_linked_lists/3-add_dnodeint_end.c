#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a node at the end of a list
 * @head the head node
 * @n: the content of the new node
 * Return: the address of the new element, or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *replace = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (replace)
		while (replace->next)
			replace = replace->next;

	new->n = n;
	new->next = NULL;
	new->prev = replace;

	if (*head == NULL)
		*head = new;
	else
		replace->next = new;

	return (new);
}
