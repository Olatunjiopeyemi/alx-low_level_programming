#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table.
 * @ht: The hash table.
 * keys should be printed in the order they appear on the table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *element;
	unsigned long int index;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (flag == 1)
				printf(", ");

			element = ht->array[index];
			while (element != NULL)
			{
				printf("'%s': '%s'", element->key, element->value);
				element = element->next;
				if (element != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
