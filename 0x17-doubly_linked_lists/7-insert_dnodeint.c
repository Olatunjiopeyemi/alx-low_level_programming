#include "lists.h"

void insert_at_middle(dlistint_t ***h, dlistint_t **new_node, dlistint_t **curr);

/**
 * insert_dnodeint_at_index -A function that inserts a node into a list
 * @h: Pointer to first node
 * @idx: Insertion index
 * @n: content of new node.
 * Return: Address of new node, or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	dlistint_t *new_node;
	unsigned int index = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	while (curr)
	{
		if (index == idx)
		{
			insert_at_middle(&h, &new_node, &curr);
			return (new_node);
		}

		curr = curr->next;
		index++;
	}

	if (index == idx)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	free(new_node);
	return (NULL);
}

/**
 * insert_at_middle - A function that inserts a node at middle of a list
 * @h: Pointer to first node
 * @new_node: node to be inserted
 * @curr: node current position
 */

void insert_at_middle(dlistint_t ***h, dlistint_t **new_node, dlistint_t **curr)
{
	(*new_node)->next = *curr;
	(*new_node)->prev = (*curr)->prev;

	if ((*curr)->prev)
		(*curr)->prev->next = *new_node;
	else
		**h = *new_node;

	(*curr)->prev = *new_node;
}
