#include "hash_tables.h"

/**
 * key_index - returns an index of a key
 * @key: key of the list
 * @size: is the size of the hash table
 * Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
