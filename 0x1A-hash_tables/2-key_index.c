#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: is the key
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair shld be stored in array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	unsigned long int index = hash_value % size;

	return (index);
}
