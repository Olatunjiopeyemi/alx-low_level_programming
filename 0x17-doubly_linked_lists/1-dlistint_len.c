#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in a list
 * @h: head of the list
 * Return: no of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
