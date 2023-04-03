#include "lists.h"

/**
 * add_nodeint - a  function that adds a new node at the beginning of a list
 * @head: A pointer to the head of the list
 * @n: Content of new node
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));


	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}


