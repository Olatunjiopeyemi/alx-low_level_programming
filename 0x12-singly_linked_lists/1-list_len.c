#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * list_len - The function that returns the number of elements in a linked list
 * @h: A pointer to the list
 * Return: The number of the element
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
