#include "hash_tables.h"

/**
 * hash_table_delete - A unction that deletes a hash table.
 * @ht: The hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *element, *temp;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			element = ht->array[index];
			while (element != NULL)
			{
				temp = element->next;
				free(element->key);
				free(element->value);
				free(element);
				element = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
