#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - This function adds a new node at the beginning of a list
 * @head: The pointer to the beginning of the list
 * @str: A pointer to the list
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	size_t len;

	len = 0;

	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	while (str[len])
                len++;

	newNode->len = len;
	newNode->str = strdup(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
