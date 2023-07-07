#include  "hash_tables.h"

/**
 * key_index - returns the index of a key.
 * @key: the key.
 * @size: the size of the array or the hash table.
 *
 * Rturn: the index of @key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
