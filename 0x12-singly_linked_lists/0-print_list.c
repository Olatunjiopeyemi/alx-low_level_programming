#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Its a function that  prints all the elements of a list
 * @h: A pointed to the list
 * Return: The number of nodes
 */


size_t print_list(const list_t *h)
{
	size_t i = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
