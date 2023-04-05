#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list.
 * @head: A pointer to the head of a list.
 * Return: The address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *new;
	listint_t *old;

	new = head;
	old = head;
	while (head && new && new->next)
	{
		head = head->next;
		new = new->next->next;

		if (head == new)
		{
			head = old;
			old = new;
			while (1)
			{

				new = old;
				while (new->next != head && new->next != old)
				{
					new = new->next;
				}
				if (new->next == head)
					break;

				head = head->next;
			}
			return (new->next);
		}
	}
	return (NULL);
}
