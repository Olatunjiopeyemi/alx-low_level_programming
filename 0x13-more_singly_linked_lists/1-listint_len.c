#include "lists.h"

/**
 * listint_len - A  function that returns the number of elements
 * in a linked list
 * @h: The pointer to the accessed list
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
