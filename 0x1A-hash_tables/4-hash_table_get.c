#include "hash_tables.h"

/**
 * hash_table_get - A  function that retrieves a value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key to get
 * Return: The value associated with the element or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *element;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	element = ht->array[index];
	while (element && strcmp(element->key, key) != 0)
		element = element->next;

	return ((element == NULL) ? NULL : element->value);
}
