#include "lists.h"

/**
 * print_listint_safe - A function that prints a linked list with a loop safely
 * @head: A pointer to the 1st node of the linked list
 * Return: The new_node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	unsigned int count = 0;
	unsigned int new_n;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		count++;
		tmp_n = tmp_n->next;
		l_n = head;
		new_n = 0;
		while (new_n < count)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (count);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
