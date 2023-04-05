#include "lists.h"

/**
 * free_listint_safe - A program that frees a linked list
 * @h: A pointer to the linked list
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int n;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		n = *h - (*h)->next;
		if (n > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;

	return (i);
}
