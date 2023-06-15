#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}
	return (elements);
}
