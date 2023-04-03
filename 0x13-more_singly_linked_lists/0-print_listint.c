#include "lists.h"

/**
 * print_listint - A  function that prints all the elements of a listint_t
 * @h: A pointed to the listint_t list.
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
