#include "hash_tables.h"

/**
 * key_index - A function that gives the index of a key
 * @key: Its the key
 * @size: The size of the array
 * Return: The index of the key.
 * Function uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
